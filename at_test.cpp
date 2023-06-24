#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"
#include "string"

using namespace std;

int main()
{
	string text = "The good ship";
	
	cout << "" <<endl;
	
	cout << text <<endl;
	
	cout << "" <<endl;
	
	cout << text.at(0) << endl;
	cout << text.at(3) << endl;
	cout << text.at(10) << endl;
	
	_getch();
	return 0;
}
