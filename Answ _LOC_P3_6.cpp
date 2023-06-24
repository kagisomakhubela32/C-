#include "iostream"
#include "conio.h"
#include "cstring"

using namespace std;

/*void accept10Lines(char *poiterArry, char Arry[], int SIZE)
{
		for(int i = 0;i < SIZE;i++)
	{
		cout << "please enter text: " << endl;
		cin.getline(poiterArry, SIZE,'\n');
	}
}*/

int main()
{
	int const SIZE = 10;
	char Arry[SIZE];
	char *poiterArry = &Arry[SIZE];

	for(int i = 0;i < SIZE;i++)
	{
		cout << "please enter text: " << endl;
		cin.getline(poiterArry, SIZE,'\n');
	}
	//void accept10Lines(poiterArry, Arry, SIZE)
	
	_getch();
	return 0;
}

