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

	string c;
	c = chamberNb;

	if (c.find('0') == std::string::npos &&
        c.find('1') == std::string::npos &&
        c.find('2') == std::string::npos &&
        c.find('3') == std::string::npos &&
        c.find('4') == std::string::npos &&
        c.find('5') == std::string::npos &&
        c.find('6') == std::string::npos &&
        c.find('7') == std::string::npos &&
        c.find('8') == std::string::npos &&
        c.find('9') == std::string::npos){
	pp+=1;
	chamberNb = line.substr (26,1);
	energyDeposit = line.substr (51,pp);
	pos = line.substr (qq);
	boost::erase_all(pos, ")");
	}

        c = chamberNb;

	if (c.find('0') == std::string::npos &&
        c.find('1') == std::string::npos &&
        c.find('2') == std::string::npos &&
        c.find('3') == std::string::npos &&
        c.find('4') == std::string::npos &&
        c.find('5') == std::string::npos &&
        c.find('6') == std::string::npos &&
        c.find('7') == std::string::npos &&
        c.find('8') == std::string::npos &&
        c.find('9') == std::string::npos){
	pp+=1;
	chamberNb = line.substr (25,1);
	energyDeposit = line.substr (50,pp);
	pos = line.substr (qq);
	boost::erase_all(pos, ")");
	}
	
	myotherfile << trackID << ", " << chamberNb << ", " << energyDeposit << ", " << pos << "\n";
	}
}
  myfile.close();
  myotherfile.close();
}
