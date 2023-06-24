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
