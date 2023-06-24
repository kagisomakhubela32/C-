/*using pointers to do a dynamic arrey*/
/*using cstrings to manip*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"
#include "new"

using namespace std;

int main()
{
	char userlist;
	
	cout << "enter ID, name and amount of the user " << endl;
	userlist = cin.get();
	
	char *listPoint = new char[strlen(userlist) + 1];
	
	
	_getch();
	return 0;
}
