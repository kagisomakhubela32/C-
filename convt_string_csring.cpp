/*using cstrings to manip*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	char userlist;
	string IDnum;
	string name;
	string amount;
	int i = 0;
	const int SIZE = 20;
	char sringArry[SIZE];
	char sringArry2[SIZE];
	
	cout << "please enter user ID, name, amount: " << endl;
	cin.getline(sringArry,SIZE,'\n');
	
	
	while(sringArry2[i] != '\n')
	{
		
		sringArry2[i] = sringArry[i];
		
		cout << sringArry2[i];
		
		i++;
	}
	sringArry2[i] = '\n';
	
	_getch();
	return 0;
}
