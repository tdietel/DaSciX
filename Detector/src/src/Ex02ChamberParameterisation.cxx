//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02ChamberParameterisation.cxx
/// \brief Implementation of the Ex02ChamberParameterisation class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: Ex02ChamberParameterisation.cc,v 1.7 2002/01/09 17:24:09 ranjard Exp \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

#include <TError.h>

#include "Ex02ChamberParameterisation.h"

/// \cond CLASSIMP
ClassImp(Ex02ChamberParameterisation)
/// \endcond

//_____________________________________________________________________________
Ex02ChamberParameterisation::Ex02ChamberParameterisation(
                                 Int_t    noChambers,
                                 Double_t radialSpacing,
                                 Double_t layerThickness,
                                 Double_t beampipeRadius,
                                 Double_t length )
  : TObject(),
    fNoChambers(noChambers),
    fHalfLength(length*0.5),
    fSpacing(radialSpacing),
    fBeamPipe(beampipeRadius),
    fThickness(layerThickness)
{
/// Standard constructor
/// \param noChambers    Number of chambers
/// \param radialSpacing      The distance between detector tubes radially
/// \param layerThickness  The thickness of each tracker chamber
/// \param beampipeRadius The radius of the beam pipe
/// \param length   The chamber length

   if( noChambers > 0 ){
      if (radialSpacing < layerThickness) {
        Fatal("Ex02ChamberParameterisation",
              "Ex02ChamberParameterisation construction: Your detector material is very thick!");
      }
   }

}

//_____________________________________________________________________________
Ex02ChamberParameterisation::~Ex02ChamberParameterisation()
{
/// Destructor
}

//_____________________________________________________________________________
void Ex02ChamberParameterisation::ComputeDimensions(
                                      Int_t copyNo, Double_t* dimension) const
{

/// Compute the chamber dimensions
/// \param copyNo     The chamber copy number
/// \param dimension  The computed chamber dimensions

  Double_t  inside_radius =  fBeamPipe + copyNo * (fThickness+fSpacing);
  dimension[0] = inside_radius;
  dimension[1] = inside_radius+fThickness;
  dimension[2] = fHalfLength;
  dimension[3] = 0;
  dimension[4] = 360;
}
