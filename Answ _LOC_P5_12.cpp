#include "iostream"
#include "conio.h"
#include "string"
#include "cctype"
 
using namespace std;
 
int main()
{
	int const SIZE = 100;
	char message[SIZE];
	char x;
	
	cout << "Please enter message: " << endl;
	cin.getline(message,SIZE,'.');
	
	
	for(int i = 0;i < SIZE;i++)
	{
		
		message[i] = tolower(message[i]);
		
		message[0] = toupper(message[0]);
	
	}
    
	cout << message << endl;
	
	
	
	_getch();
	return 0;
}
