#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	string userlist;
	string IDnum;
	string name;
	string amount;
	
	cout << "please enter user ID, name, amount: " << endl;
	getline(cin,userlist);
	
	do
	{
		IDnum = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
		name = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
		amount = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
	}while(userlist == "\n");
	
	cout << endl;
	
	cout << IDnum << endl;
	cout << name << endl;
	cout << amount << endl;
	
	_getch();
	return 0;
}
