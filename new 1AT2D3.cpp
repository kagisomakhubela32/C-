#include "conio.h"
#include "iostream"

using namespace std;

const int SIZECOL = 5;
const int SIZEROW = 4;


int main()
{
	int sum = 0;
	int sumrowA[SIZEROW];
	int sumrow = 0;
	int sumROW1 = 0;

	int table[SIZECOL][SIZEROW] = {5,6,5,8,4,6,7,8,6,3,7,8,6,4,1};
	int *pointer = &table[SIZECOL][SIZEROW];

	for(int r = 0;r < SIZEROW;r++)
	{
		cout<<" "<<endl; ;

		for(int c = 0;c < SIZECOL;c++)
		{

			*pointer = table[c][r];
			
			sum = sum + *pointer;
			
			sumrow = sumrow + *pointer;
			
			cout<< *pointer<<"  ";
			
		}
		cout<<" "<<endl;
		sumrowA[r] = sumrow;
		
		sumrow = 0;
		
	}
	

	
	cout<<" "<<endl;
	
	cout <<sum<<endl;


	_getch();
	return 0;
}
