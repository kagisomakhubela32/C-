#include "iostream"
#include "conio.h"
#include "cctype"
#include "cstring"
#include "string"

using namespace std;

int main()
{
	int const SIZE = 50;
	char message[SIZE];
	
	do
	{
		cout << "Please enter a string: " << endl;
		cin.get(message,'1');
		
		for(int i = 0;i < SIZE;i++)
		{
			message[i] = toupper(message[i]);
		}
		
		cout << message << endl;
		
		
	}while(message != isdigit('1')); //problem
	
	
	_getch();
	return 0;
}
