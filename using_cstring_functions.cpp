/*using cstring functions */

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
	
	strcpy(sringArry2,sringArry);
	
	cout << endl;
	cout << sringArry2 << endl;
	cout << endl;
	
	cout<<"the length of the copied string is = "<< strlen(sringArry2) << endl;
	
	
	_getch();
	return 0;
}
