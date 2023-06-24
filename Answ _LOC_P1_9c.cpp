#include "iostream"
#include "conio.h"
#include "string"
#include "cctype"

using namespace std;

int main()
{
	string message;
	
	cout <<"Please enter string: "<<endl;
	getline(cin,message);
	
	cout <<""<<endl;
	
	for(int i = 0;i < int(message.length());i++)
	{
		message[i] = toupper(message[i]);
	}
	
	cout << message <<endl;
	
	_getch();
	return 0;
}
