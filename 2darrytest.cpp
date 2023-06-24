#include "conio.h"
#include "iostream"

using namespace std;

int main()
{
	const int SIZECOL = 3;
	const int SIZEROW = 5;
	
	int table[SIZECOL][SIZEROW] = {5,6,5,8,4};
	
	for(int c = 0;c < SIZECOL;c++)
	{
		for(int r = 0;r < SIZEROW;r++)
		{
			cout<<table[c][r]<<endl;
			
		}
	}
	
	_getch();
	return 0;
}
