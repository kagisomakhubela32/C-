#include "iostream"
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	string filename = "E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\employee.bak";
	int i = 0;
	
	ifstream empfile;
	string line = "";
	
	empfile.open(filename.c_str());
	
	while(empfile.good());
	{
		i = i + 1;
		
		getline(empfile,line);
		cout << i << ", "<< line << endl;
	}
	
	empfile.close();
	
	_getch();
	return 0;
}
