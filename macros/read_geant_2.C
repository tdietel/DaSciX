#include <iostream>
#include <fstream>
#include <string>

void read_geant_2(TString filename="Example02.root")
{

  std::ofstream out("out.txt");
  std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

  TFile* infile=new TFile(filename.Data());

  TTree* tr = (TTree*)infile->Get("Example02");

  tr->Print();

  //std::cout << tr->GetEntries() << endl;

  // set up branch for hits
  TClonesArray* fTrackerCollection = new TClonesArray("Ex02TrackerHit");
  tr->SetBranchAddress("hits",&fTrackerCollection);

  // set up branch for MC stack
  Ex02MCStack* stack = new Ex02MCStack;
  tr->SetBranchAddress("stack",&stack);


  // loop over events
  for (int ev=0; ev<tr->GetEntries(); ev++) {

    std::cout << "event " << ev << endl;
    tr->GetEvent(ev);  // read event from TTree


    // write something about the MC particles found in the stack
    //std::cout << "  MC particles: " << stack->GetNtrack() << endl;
    for (int i=0; i < stack->GetNtrack(); i++) {
      Ex02Particle*  part = stack->GetParticle(i);

      part->Print();
    }


    // print the simulated hits
    for (int h=0; h < fTrackerCollection->GetEntriesFast(); h++) {
      Ex02TrackerHit* hit =  (Ex02TrackerHit*)(*fTrackerCollection)[h];

      hit->Print();
    }

  }

}
