#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int SIZE = 7;
	int sortNum[] = {5,9,6,3,7,5};
	int temp = 0;
	
	for(int y = 0;y < 7;y++)
	{
		for(int x = 0;x < SIZE;x++)
		{
			if(sortNum[x] > sortNum[x+1])
			{
				temp = sortNum[x];
				sortNum[x] = sortNum[x + 1];
				sortNum[x+1] = temp;
				
			}
		

		}
		SIZE = SIZE - 1;
		
		cout <<sortNum[x]<<endl;
	}
	
	
	_getch();
	return 0;
}
