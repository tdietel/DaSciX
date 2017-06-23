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

#include <iostream>
#include <fstream>
using namespace std;

void DaSciX_pythia8(Int_t nev  = 100, Int_t ndeb = 1)
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

   ofstream myfile;
   
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
   pythia8->ReadString("JetMatching:eTjetMin = 50");
   //pythia8->ReadString("Event:list(showScaleAndVertex) = true");

// Initialize
   pythia8->Initialize(2212 /* e- */, -2212 /* e+ */, 14000. /* GeV */);

// Event loop
   for (Int_t iev = 0; iev < nev; iev++) {
      pythia8->GenerateEvent();
      if (iev < ndeb) pythia8->EventListing();
      pythia8->ImportParticles(particles,"All");
      Int_t np = particles->GetEntriesFast();
// Particle loop
	Int_t j = 0;
	for (Int_t ip = 0; ip < np; ip++) {
		TParticle* part = (TParticle*) particles->At(ip);
		Int_t ist = part->GetStatusCode();
		Int_t pdg_1 = part->GetPdgCode();
		Double_t time = part->T();
		Double_t Px = part->Px();
		Double_t Py = part->Py();
		Double_t Pz = part->Pz();
		Double_t Vx = part->Vx();
		Double_t Vy = part->Vy();
		Double_t Vz = part->Vz();
	        Int_t status = part->GetStatusCode();
		j++;
         // Positive codes are final particles.
	 
         if (ist <= 0) continue;
         Int_t pdg = part->GetPdgCode();
         Float_t charge = TDatabasePDG::Instance()->GetParticle(pdg)->Charge();
         myfile.open ("example.tx", ios::app);

	 myfile << j << "\t" << pdg_1 << "\t" << time << "\t" << status << "\t" << Px << "\t" << Py << "\t" << Pz << "\t" << Vx << "\t" << Vy << "\t" << Vz << "\n";
         myfile.close();
	 
         if (charge == 0.) continue;
         
//Float_t eta = part->Eta();
         Float_t pt  = part->Pt();

         //timeH->Fill(time);
         //if (pt > 0.) ptH->Fill(pt, 1./(2. * pt));
      }



   }

   pythia8->PrintStatistics();
 }


