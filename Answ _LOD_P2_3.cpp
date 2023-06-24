#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	string message;
	string texrfile;
	
	
	ofstream textfile;
	textfile.open("text.txt");
	
	cout << "Please enter text: " << endl;
	
	do
	{
		getline(cin,message);
		
		textfile << message;
		
	}while(message != "");
	
	textfile.close();
	
	_getch();
	return 0;
}
