#include <fstream>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;

void csv()
{

  ifstream myfile;
  myfile.open ("out.txt");

  ofstream myotherfile;
  myotherfile.open ("hits.csv", std::ios_base::app);
  myotherfile << "trackID, chamberNb, energyDeposit(keV), Xpos, Ypos, Zpos" << endl;
  for( string line; getline( myfile, line ); )
  {
      if(line.find("chamberNb") != string::npos){
  	string trackID = line.substr (11,3);
 	string chamberNb = line.substr (27,1);
	
	size_t p = line.find("position");
	int pp = static_cast<int>(p);
	pp-=54;
	string energyDeposit = line.substr (52,pp);
	
	size_t q = line.find("c");
	int qq = static_cast<int>(p);
	qq+=16;
	string pos = line.substr (qq);
	boost::erase_all(pos, ")");
	
	myotherfile << trackID << ", " << chamberNb << ", " << energyDeposit << ", " << pos << "\n";
	}
}
  myfile.close();
  myotherfile.close();
}
