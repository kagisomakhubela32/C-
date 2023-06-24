#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"

using namespace std;


int main()
{
	int const SIZE = 20;
	char message1[SIZE];
	string message;
	int i = 0;
	
	cout << "Please enter a message: " <<endl;
	//getline(cin,message);
	cin.getline(message,SIZE,'.');
	
	for(int i = 0;i < SIZE;i++)
	{
		if(message[i] == 'k')
		{
			message.erase(i,1);
		}
	}
	
	/*
	do
	{
		
		message.erase(message.find('k'));
		
		i++;
		
	}while(i != message.length());
	*/
	
	cout <<""<<endl;
	
	cout << message <<endl;
	
	_getch();
	return 0;
}
