Part 2.
6.
#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"

using namespace std;


int main()
{
	int const SIZE = 20
	char message[SIZE];
	
	cout << "Please enter a message: " <<endl;
	cin.getline(message,SIZE,'.');
	
	for(int i = 0;i < SIZE;i++)
	{
		message[i] = message[i].erase(message[i].fine('k'),1);
	}
	
	/*
	do
	{
		message.erase(message.fine('k'),1);
		
	}while();
	*/
	
	cout <<""<<endl;
	
	cout << message <<endl;
	
	_getch();
	return 0;
}


Part 2
9.
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
	string message2;

	charPointer = &emp;
	
	for(int i = 0;i < SIZE;i++)
	{
		if(message[i] == '\0')
		{
			temp = message[i];
			message[i] = *charPointer;
			message[i+1] = temp;
		}
		
		message[i] = message[i];
		
	}
	
	//message2 = message2.insert(int(message2.length())+1, charPointer);
	
	cout << message << endl;
	
	_getch();
	return 0;
}
11.
#include "iostream"
#include "conio.h"
#inclide "cstring"
#include "cctype"

using namespace std;

int main()
{
	int const SIZE = 50;
	char message[SIZE];
	
	cout << "enter string: " << endl;
	cin.getline(message,SIZE,'.');
	
	for(int i = 0;i < SIZE;i++)
	{
		if(message[i] == isspace(' '))
		{
			message.erase(i,1);
		}
	}
	cout << massege << endl;
	
	_getch();
	return 0;
}


Part 3.
4.
 b.

#include "iostream"
#include "conio.h"
#include "cctype"

using namespace std;

void displayDayWk(char *dayOfWk[],int numDayOfWk)
{

	cout << "The day of the week entered is: "<< dayOfWk[numDayOfWk] << endl;
	
}

int main()
{
	int numDayOfWk;
	
	char *dayOfWk[] = {" ", "sunday", "monday", "tuesday", "wednesday", "thuesday", "friday"};
	
	cout << "Please enter number of day of the week: where 1 = (sunday) 2 = (monday) 3 = (tuesday) 4 = (wednesday) 5 = (thuesday) 6 = (friday): " << endl;
	cin >> numDayOfWk;
	
	cout << "" << endl;
	
	//cout << "The day of the week entered is: "<< dayOfWk[numDayOfWk] << endl;
	
	displayDayWk(dayOfWk,numDayOfWk);
	
	_getch();
	return 0;
}
 

6.
#include "iostream"
#include "conio.h"
#include "cstring"

using namespace std;

int main();
{
	int const SIZE = 10;
	char *poiterArry[SIZE];
	
	for(int i = 0;i < SIZE;i++)
	{
		cout << "please enter text: " << endl;
		cin.getline(poiterArry[i]);
	}
	
	_getch();
	return 0;
}







Part 4.

2.
 a.
#include "iostream"
#include "conio.h"
#include "cstring"
#include "cctype"
#include "string"

using namespace std;

int main()
{
	string text = "how is the time";
	
	cout << text.at(0) << endl;
	
	_getch();
	return 0;
}
 
 
 
 
 
 
 b.
 c.
 d.
 
 6.
 
 
 
 
 7
 
 
 
 
 
 Part 5
 
 3.
 
 
 
 
 
 
 12.
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


