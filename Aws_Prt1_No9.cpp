#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	
	int const SIZE = 5;
	int Array[SIZE];
	
	cout <<"Please enter 5 integer numbers: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cin >> Array[i];
	}
	
	cout <<""<<endl;
	
	for(int i = SIZE;i > -1;i--)
	{
		cout << Array[i]<<" ";
	}
	
	_getch();
	return 0;
}
