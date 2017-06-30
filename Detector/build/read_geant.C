void read_geant(TString filename="/home/chris/DaSciX/Detector/build/ExampleE02_1.root")
{

  TFile* infile=new TFile(filename.Data());

  TTree* tr = (TTree*)infile->Get("ExampleE02");

  tr->Print();

  cout << tr->GetEntries() << endl;

  // set up branch for hits
  TClonesArray* fTrackerCollection = new TClonesArray("Ex02TrackerHit");
  tr->SetBranchAddress("hits",&fTrackerCollection);

  // set up branch for MC stack
  Ex02MCStack* stack = new Ex02MCStack;
  tr->SetBranchAddress("stack",&stack);
  
  
  // loop over events
  for (int ev=0; ev<tr->GetEntries(); ev++) {

    cout << "event " << ev << endl;
    tr->GetEvent(ev);  // read event from TTree


    // write something about the MC particles found in the stack
    cout << "  MC particles: " << stack->GetNtrack() << endl;
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
