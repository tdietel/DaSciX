//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02DetectorConstructionOld.cxx
/// \brief Implementation of the Ex02DetectorConstructionOld class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: Ex02DetectorConstructionOld.cc,v 1.11 2002/01/09 17:24:09 ranjard Exp \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

#include <iostream>

#include <TVirtualMC.h>

#include "Ex02DetectorConstructionOld.h"
#include "Ex02ChamberParameterisation.h"

/// \cond CLASSIMP
ClassImp(Ex02DetectorConstructionOld)
/// \endcond

using namespace std;

//_____________________________________________________________________________
Ex02DetectorConstructionOld::Ex02DetectorConstructionOld()
  : TObject(),
  fWorldLength(0.),
  fTrackerLength(0.),
  fNofChambers(0) ,
  fThickness(0.),
  fChamberSpacing(0.),
  fBeamPipe(0.),
  fImedAir(0),
  fImedSi(0)

{
/// Default constuctor

  //fpMagField = new ExN02MagneticField();

//--------- Sizes of the principal geometrical components (solids)  ---------

fNofChambers = 10;
fThickness =   0.01;
fChamberSpacing = 1;
fTrackerLength = 100;
fBeamPipe = 2;
fWorldLength= 1.2 *(fTrackerLength);

}

//_____________________________________________________________________________
Ex02DetectorConstructionOld::~Ex02DetectorConstructionOld()
{
/// Destructor

  //delete fpMagField;
}

//_____________________________________________________________________________
void Ex02DetectorConstructionOld::ConstructMaterials()
{
/// Construct materials using VMC functions

//--------- Material definition ---------

  Double_t a;
  Double_t z;
  Double_t density;
  Double_t radl;
  Double_t absl;
  Float_t* ubuf = 0;

  Double_t a2[2] = { 14.01, 16.00};
  Double_t z2[2] = {  7.0,   8.0};
  Double_t w2[2] = {  0.7,   0.3};
  density = 1.29e-03;
  Int_t imatAir;
  gMC->Mixture(imatAir, "Air", a2, z2, density, 2, w2);

  a = 27.9769265325;
  z = 14.;
  density = 2.3290;
  //pressure    = 1*atmosphere;
  //temperature = 293.15*kelvin;
  radl =  1553.9;
  absl = 0.1;
  Int_t imatSi;
  gMC->Material(imatSi, "Silicon", a, z, density, radl, absl, ubuf, 0);

  //
  // Tracking medias
  //

  Int_t ifield = 2;          // User defined magnetic field
  Double_t fieldm = 10.;     // Maximum field value (in kiloGauss)
  Double_t epsil  = .001;    // Tracking precision,
  Double_t stemax = -0.01;   // Maximum displacement for multiple scat
  Double_t tmaxfd = -20.;    // Maximum angle due to field deflection
  Double_t deemax = -.3;     // Maximum fractional energy loss, DLS
  Double_t stmin  = -.8;
  gMC->Medium(fImedAir, "Air",  imatAir, 0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin, ubuf, 0);
  gMC->Medium(fImedSi, "Silicon", imatSi, 0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin, ubuf, 0);

  // Print all the materials defined.
  //
  //  G4cout << G4endl << "The materials defined are : " << G4endl << G4endl;
  //  G4cout << *(G4Material::GetMaterialTable()) << G4endl;
}

//_____________________________________________________________________________
void Ex02DetectorConstructionOld::ConstructGeometry()
{
/// Construct volumes using VMC functions

//--------- Sizes of the principal geometrical components (solids)  ---------

Int_t chamberMater = fImedSi;

Double_t trackerSize = 0.5*fTrackerLength;   // Half length of the Tracker

//--------- Definitions of Solids, Logical Volumes, Physical Volumes ---------

  //------------------------------
  // World
  //------------------------------

  Double_t halfWorldLength = 0.5*fWorldLength;

  Double_t world[3];
  world[0] = halfWorldLength;
  world[1] = halfWorldLength;
  world[2] = halfWorldLength;
  gMC->Gsvolu("WRLD", "BOX", fImedAir, world, 3);

  //------------------------------
  // Tracker
  //------------------------------

  Double_t tracker[3];
  tracker[0] = trackerSize;
  tracker[1] = trackerSize;
  tracker[2] = trackerSize;
  gMC->Gsvolu("TRAK", "BOX", fImedAir, tracker, 3);

  Double_t posX = 0.;
  Double_t posY = 0.;
  Double_t posZ = 0.;
  gMC->Gspos("TRAK", 1 ,"WRLD", posX, posY, posZ, 0, "ONLY");

  //------------------------------
  // Tracker segments
  //------------------------------
  //
  // An example of Parameterised volumes
  // dummy values for G4Box -- modified by parameterised volume
  // - implemented using Gsposp

  Double_t chamber[3];
  chamber[0] = -1;
  chamber[1] = -1;
  chamber[2] = -1;
  gMC->Gsvolu("CHMB","TUB", chamberMater, chamber, 0);

  Ex02ChamberParameterisation* chamberParam
    = new Ex02ChamberParameterisation(
			   fNofChambers,          // NoChambers
			   fChamberSpacing,        // Z spacing of centers
			   fThickness,          // Width Chamber
			   fBeamPipe,           // lengthInitial
			   fTrackerLength);           // lengthFinal
  for (Int_t i=0; i<fNofChambers; i++) {
    Double_t dim[5];
    chamberParam->ComputeDimensions(i, dim);
    gMC->Gsposp("CHMB", i ,"TRAK", 0.,0.,0., 0, "ONLY", dim, 5);
  }

  cout << "There are " << fNofChambers
       << " chambers in the tracker region. "
       << "The chambers are " << fThickness/10. << " mm of "
       //<< ChamberMater->GetName()
       << "Silicon."
       << "\n The distance between chamber is "
       << fChamberSpacing << " cm"
       << endl;

  //------------------------------------------------
  // Sensitive detectors
  //------------------------------------------------
/*

  G4SDManager* SDman = G4SDManager::GetSDMpointer();

  G4String trackerChamberSDname = "ExN02/TrackerChamberSD";
  ExN02TrackerSD* aTrackerSD = new ExN02TrackerSD( trackerChamberSDname );
  SDman->AddNewDetector( aTrackerSD );
  logicChamber->SetSensitiveDetector( aTrackerSD );
*/

//--------- Visualization attributes -------------------------------
/*
  G4VisAttributes* BoxVisAtt= new G4VisAttributes(G4Colour(1.0,1.0,1.0));
  logicWorld  ->SetVisAttributes(BoxVisAtt);
  logicTarget ->SetVisAttributes(BoxVisAtt);
  logicTracker->SetVisAttributes(BoxVisAtt);

  G4VisAttributes* ChamberVisAtt = new G4VisAttributes(G4Colour(1.0,1.0,0.0));
  logicChamber->SetVisAttributes(ChamberVisAtt);
*/
//--------- example of User Limits -------------------------------

  // below is an example of how to set tracking constraints in a given
  // logical volume(see also in N02PhysicsList how to setup the process
  // G4UserSpecialCuts).
  // Sets a max Step length in the tracker region
  // Double_t maxStep = 0.5*fChamberWidth, maxLength = 2*fTrackerLength;
  // Double_t maxTime = 0.1*ns, minEkin = 10*MeV;
  // logicTracker->SetUserLimits(new G4UserLimits(maxStep,maxLength,maxTime,
  //                                               minEkin));

}

//_____________________________________________________________________________
void Ex02DetectorConstructionOld::SetTargetMaterial(const TString& /*materialName*/)
{
/// Set target material (not available with VMC)

  Warning("SetTargetMaterial", "Not available in virtual Monte Carlo");
}

//_____________________________________________________________________________
void Ex02DetectorConstructionOld::SetChamberMaterial(const TString& /*materialName*/)
{
/// Set chamber material (not available with VMC)

  Warning("SetTargetMaterial", "Not available in virtual Monte Carlo");
}
