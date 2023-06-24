#include "iostream"
#include "string"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	char messArry[SIZE] = {"hellow"};
	
	for(int i = SIZE;i > -1;i--)
	{ 	
		cout <<messArry[i];
		
	}
	
	_getch();
	return 0;
}
