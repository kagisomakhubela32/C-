/*using arreys to manip a string*/

#include "iostream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	const int SIZE = 5;
	string IDnum[SIZE];
	string name[SIZE];
	string amount[SIZE];
	string userList;
	int i = 0;
	
	userList = "10001 kagiso 852 \n";



	do
	{
		IDnum[i] = userList.substr(0,userList.find(" "));
					userList.erase(userList.find(" ")+1);
			
		name[i] = userList.substr(0,userList.find(" "));
					userList.erase(userList.find(" ")+1);
						 
		amount[i] = userList.substr(0,userList.find(" "));
					 userList.erase(userList.find(" ")+1);
			
			
	}while(userList == "\n");
		
		cout << IDnum[i] << "\t" << name[i] << "\t" << amount[i] << endl;
		
		i++;
		
	
	_getch();
	return 0;
}
