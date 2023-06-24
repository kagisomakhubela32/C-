#include "conio.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	char name[20] = {"hoore for all of us"};
	char *pointer;
	
	for(int x = 0;x < 20;x++)
	{
		pointer = name[x]
		
		cout<<*pointer<<endl;
	}
	
	_getch();
	return 0;
}
