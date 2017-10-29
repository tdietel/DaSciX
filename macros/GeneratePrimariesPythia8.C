/// \file
/// \ingroup tutorial_pythia
/// pythia8 basic example
///
/// to run, do:
///
/// ~~~{.cpp}
///  root > .x pythia8.C
/// ~~~
///
/// Note that before executing this script,
///
///  - the env variable PYTHIA8 must point to the pythia8100 (or newer) directory
///  - the env variable PYTHIA8DATA must be defined and it must point to $PYTHIA8/xmldoc
///
/// \macro_code
///
/// \author Andreas Morsch

#include <math.h>       /* sin and cos */
#define PI 3.14159265

#include <iostream>
#include <fstream>
using namespace std;

void GeneratePrimariesPythia8()
{
   const char *p8dataenv = gSystem->Getenv("PYTHIA8DATA");
   if (!p8dataenv) {
      const char *p8env = gSystem->Getenv("PYTHIA8");
      if (!p8env) {
         Error("DaSciX_pythia8.C",
               "Environment variable PYTHIA8 must contain path to pythia directory!");
         return;
      }
      TString p8d = p8env;
      p8d += "/xmldoc";
      gSystem->Setenv("PYTHIA8DATA", p8d);
   }

   const char* path = gSystem->ExpandPathName("$PYTHIA8DATA");
   if (gSystem->AccessPathName(path)) {
         Error("DaSciX_pythia8.C",
               "Environment variable PYTHIA8DATA must contain path to $PYTHIA8/xmldoc directory !");
      return;
   }





//for (Int_t loopvar = 0; loopvar < 10000; loopvar++) {

// Load libraries
   if (gSystem->Getenv("PYTHIA8")) {
      gSystem->Load("$PYTHIA8/lib/libpythia8");
   } else {
      gSystem->Load("libpythia8");
   }
   gSystem->Load("libEG");
   gSystem->Load("libEGPythia8");
// Histograms
   //TH1F* timeH = new TH1F("timeH", "Time", 120, -12., 12.);
   //TH1F* ptH  = new TH1F("ptH",  "pt",              50,   0., 10.);

// Array of particles
   TClonesArray* particles = new TClonesArray("TParticle", 1000);
// Create pythia8 object
   TPythia8* pythia8 = new TPythia8();

// Configure
   pythia8->ReadString("WeakSingleBoson:all = on");
   pythia8->ReadString("WeakDoubleBoson:all = on");
   pythia8->ReadString("PhaseSpace:pTHatMin = 50");
   pythia8->ReadString("Random:setSeed = on");
   pythia8->ReadString("Random:seed = 0");

   //pythia8->ReadString("Event:list(showScaleAndVertex) = true");

// Initialize
   pythia8->Initialize(2212 /* p */, 2212 /* p */, 14000. /* GeV */);

  pythia8->GenerateEvent();
  pythia8->EventListing();
  pythia8->ImportParticles(particles,"All");
  Int_t np = particles->GetEntriesFast();

  // Create txt file to write to
  ofstream myfile;
  //ofstream two;
  myfile.open ("InitialParticles.txt");//,fstream::app);
  //two.open("Phi.csv");

//myfile << "event: " << loopvar << endl;

// Particle loop
	Int_t j = 0;
	for (Int_t ip = 0; ip < np; ip++) {

      TParticle* part = (TParticle*) particles->At(ip);
      Int_t status = part->GetStatusCode();     // positive if final particle
      Int_t pdg = part->GetPdgCode();           // Type of particle

      // Position
      Double_t T = part->T();
      Double_t Vx = part->Vx();
      Double_t Vy = part->Vy();
      Double_t Vz = part->Vz();
      Double_t R = part->R();               // sqrt(Vx^2 + Vy^2)

      // Energy and Momentum
      Double_t Px = part->Px();
      Double_t Py = part->Py();
      Double_t Pz = part->Pz();
      Double_t E = part->Energy();

      // Polarization
      TVector3 pol;
      part->GetPolarisation(pol);
      Double_t polx = pol.X();
      Double_t poly = pol.Y();
      Double_t polz = pol.Z();

      //Phi_angle

      Double_t phiZ = part->Phi();

     //Mass

      Double_t mass = part->GetMass();

      j++;

      if (R<2)
      {
          if (status<=0)
          {
              // Daughter ID
              Int_t daughter = part->GetFirstDaughter();

              TParticle* daughterParticle = (TParticle*) particles->At(daughter);

              if (daughterParticle->R()>2)
              {
                  myfile << pdg << "\t" << Px << "\t" << Py << "\t" << Pz
                     << "\t" << E << "\t" << Vx << "\t" << Vy << "\t"
                     << Vz << "\t" << T << "\t" << polx << "\t" << poly
                     << "\t" << polz << "\n";

		  //two << phiZ << "\t" << mass << "\n";
              }

          }
          else
          {
              myfile << pdg << "\t" << Px << "\t" << Py << "\t" << Pz
                 << "\t" << E << "\t" << Vx << "\t" << Vy << "\t"
                 << Vz << "\t" << T << "\t" << polx << "\t" << poly
                 << "\t" << polz << "\n";

              //two << phiZ << "\t" << mass <<"\n";
          }

      }

   }

   myfile.close();
   //pythia8->PrintStatistics();
 }
//}
