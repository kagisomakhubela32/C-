outcome Assingment C.

part 1.

question 1.

1.
 b.
void vowels(char strng[]) 
{ 
  int i = 0; 
  char c;
  int count = 0;
  
  while ((c = strng[i++]) != '\0')
	  
    switch(c) 
    { 
       case 'a': 
       case 'e': 
       case 'i': 
       case 'o': 
       case 'u':
	   
         cout << c;
		 
    } // end of switch
	
  cout << endl;
  
  // counts the total number of vowels in a string
  count = count + 1;
  // displays the output
  cout <<"The total number of vowels in the string: "<< count <<endl;
	
  return; 
} 

3.*********************************
 b.
 #include "iostream"
 #include "string"
 #include "conio.h"
 
 using namespace std;
 
 // function to count all the charectors in a string
 int coutChar(int cout, char message)
 {
	 count = int(message.length())
	 
	 return count;
 }
 
 int main()
 {
	string message;
	int count;
		
	cout <<"Please enter message: "<<endl;
	getline(cin,message);
	// function call and display of output
	cout <<"The total number of charectors in the message is = "<<coutChar(cout, message)<<endl; 
	 
	 
	_getch();
	return 0;	
 }
 

5.********************************************
#include "iostream"
#include "string"
#include "conio.h"

using namespace std;

int main()
{
	string message;
	string word = "";
	
	// input from user
	cout <<"Enter a message: "<<endl;
	getline(cin,message);
	
	for(auto i : message)
	{
		if(i == ' ')
		{
			cout << word << endl;
			word = "";
		}
		else
			word = word + i;
	}
	
	//display of outputs
	cout << word << endl;
	
	_getch();
	return 0;
}


6.***************
void reverse(char [], int SIZE)
{
	for(int i = SIZE;i > -1;i--)
	{ 	
		cout <<messArry[i];
		
	}
}


7.
void delChar(char message,3,5)
{
	
	massage.erase(3,5)
}


9.
 c.
#include "iostream"
#include "conio.h"
#include "string"
#include "cctype"

using namespace std;

int main()
{
	string message;
	
	// get inputs from user
	cout <<"Please enter string: "<<endl;
	getline(cin,message);
	
	cout <<""<<endl; // for output speacing before output
	
	for(int i = 0;i < int(message.length());i++)
	{
		message[i] = toupper(message[i]); // converts to upper cases 
	}
	// display of outputs
	cout << message <<endl;
	
	_getch();
	return 0;
}


Part 2

1.
 a. *text = 'B'
	*(textf + f3) = 'o'
	*(textf + f10) = ' '
	
 b. *text = 'H'
	*(textf + f3) = 'r'
	*(textf + f10) = 'i'
	
 c. *text = 'W'
	*(textf + f3) = 't'
	*(textf + f10) = 'a'
 


6.//must make a function
remove(message,'H')
{
		
	for(int i = 0;i < message.length();i++)
	{
		if(message[i] == 'H')
		{
			message.erase(i,1); //finds and deletes 'k' from string
		}
	}
	
	
}



8.************
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
		// inputs from user
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


9.
void addCherEnd(char message, char *charPointer,char temp)
{
	
	char *charPointer;
	
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
}




11.
trimfrnt(char message[])
{
	for(int i = 0;i < message.length();i++)
	{
		if(message[0] == ' ')
		{
			message.erase(0,1);
		}
	}
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

void accept10Lines(char *poiterArry, char Arry[], int SIZE)
{
		for(int i = 0;i < SIZE;i++)
	{
		cout << "please enter text: " << endl;
		cin.getline(poiterArry, SIZE);
	}
}





Part 4.

2.
 a.
  text.at(0) = 'h'
  text.at(3) = ' '
  text.at(10) = ' '
 b.
  text.at(0) = 'R'
  text.at(3) = 'k'
  text.at(10) = 'o'
 c.
  text.at(0) = 'H'
  text.at(3) = 'p'
  text.at(10) = 'd'
 d.
  text.at(0) = 'T'
  text.at(3) = ' '
  text.at(10) = 'h'
 
 6.
 #include "iostream"
 #include "conio.h"
 #include "cstring"
 #include "string"
 #include "cctype"
 
 using namespace std;
 
 int main()
 {
	 string message;
	 
	 cout << "Please enter message" << endl;
	 getline(cin,message);
	 
	 for(int i = int(message.length());i > -1;i--)
	 {
		cout << message.at(i) << endl;
	 }
	 
	 _getch();
	 return 0;
 }
 
 
7.
#include "iostream"
#include "conio.h"
#include "cstring"
#include "string"
#include "cctype"

using namespace std;

int main()
{
	string text;
	char find;
	int i = 0;
	int count = 0;
	int findIndx;
	
	cout << "Please enter text: " <<endl;
	getline(cin,text);
	
	cout << "enter the charector to count: " << endl;
	cin >> find;
	
	do
	{
		text.find(find);
		
		if(text.find(find) == i)
		{
			count = count + 1;
		}
		
		i++ ;
		
	}while(i != int(text.length()));
	
	cout << count << endl;
	
	_getch();
	return 0;
}




 Part 5
 
 3.
 #include "iostream"
 #include "conio.h"
 #include "string"
 #include "cctype"
 
 using namespace std;
 
 int main()
 {
	 
	 string message;
	 int count = 0;
	 
	 cout << "Please enter message: " << endl;
	 getline(cin,message);
	 
	 for(int i = 0;i < message.length();i++)
	 {
		 if(message[i] == ' ')
		 {
			 count = count + 1;
		 }
		 
	 }
	 
	 cout << count + 1 << endl;
	 
	 _getch();
	 return 0;
 }
 
 
12.
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
 
 
 
 
 
 
 









 