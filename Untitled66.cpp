#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"

using namespace std;


int main()
{
	string message;
	
	cout << "Please enter a message: " <<endl;
	getline(cin,message);
	
	for(int i = 0;i < int(message.length());i++)
	{
		message[i].erase(message[i].find('k'),1);
	}
	
	//message.erase(message.find('k'),1);
	
	cout <<""<<endl;
	
	cout << message <<endl;
	
	_getch();
	return 0;
}
