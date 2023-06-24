#include "iostream"
#include "conio.h"
#include "cstring"

using namespace std;

int main()
{
	
	int const SIZE = 100;
	string sentEdit = "kagiso";
	int SIZE = sentEdit.length();
	string rvsentEdit[SIZE];
	string rvsentEditAry[SIZE] = sentEdit;

	for(int i = sentEdit.length();i >= 0;i--)
	{
		rvsentEdit[i] = sentEdit[i];
	}
	cout << rvsentEdit;
	
	
	return 0;
	_getch();
}
