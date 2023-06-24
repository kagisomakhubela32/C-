#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"

using namespace std;

int main()
{
	int const SIZE = 50;
	//char message[SIZE];
	string message;
	
	cout << "enter string: " << endl;
	//cin.getline(message,SIZE,'.');
	getline(cin,message);
	
	for(int i = 0;i < message.length();i++)
	{
		if(message[i] == ' ')
		{
			message.erase(i,1);
		}
	}
	cout << message << endl;
	
	_getch();
	return 0;
}
