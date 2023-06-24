#include "iostream"
#include "conio.h"
#include "cctype"
#include "cstring"

using namespace std;

int main()
{
	int const SIZE = 10;
	char *charPointer;
	char message[SIZE] = "kagiso";
	char emp = 's';
	char temp;
	string message2 = "kagiso";

	charPointer = &emp;
	
	/*for(int i = 0;i < SIZE;i++)
	{
		if(message[i] == '\0')
		{
			temp = message[i];
			message[i] = *charPointer;
			message[i+1] = temp;
		}
		
		message[i] = message[i];
		
	}*/
	
	strcat(message, charPointer);
	//message2 = message2.insert(int(message2.length())+1, charPointer);
	
	cout << message << endl;
	
	_getch();
	return 0;
}
