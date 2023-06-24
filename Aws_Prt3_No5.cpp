#include "iostream"
#include "conio.h"

using namespace std;

void display(char string[], int SIZE)
{
	for(int i = 0;i < SIZE;i++)
	{
		cout << string[i];
	}
}

int main()
{
	int const SIZE = 8;
	char messege[] = {"Vacation is near"};
	
	display(messege, SIZE);

	_getch();
	return 0;
}
