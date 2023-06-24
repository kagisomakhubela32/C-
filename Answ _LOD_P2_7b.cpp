#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"
#include "cstdlib"

using namespace std;

int main()
{

	char initial;
	string line = "";
	string name;
	string sSNum;
	double hourRate;
	int hourWokd;
	double grosPay;
	
	/*	
	ofstream ininfofile("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\info.dat");
	
	while(ininfofile.good())
	{
		ininfofile >> initial >> name >> sSNum >> hourRate >> hourWokd >> grosPay;
		
		grosPa << hourRate * hourWokd;
		
		ininfofile << grosPa;
		
		exit(1);
	}
	*/
	
	ifstream outinfofile;("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\info.dat");
 	
 	outinfofile >> initial >> name >> sSNum >> hourRate >> hourWokd >> grosPay;
 	
	while(outinfofile.good())
	{
		
		//getline(outinfofile,line);
		cout << initial << " " << name << " " << sSNum << " " << hourRate << " " << hourWokd << " " << grosPay << endl;
		
		outinfofile >> initial >> name >> sSNum >> hourRate >> hourWokd >> grosPay;
		
		exit(1);
	}
	
	outinfofile.close();
	
	_getch();
	return 0;
}
