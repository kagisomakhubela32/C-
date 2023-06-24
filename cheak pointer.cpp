#include "iostream"
#include "conio.h"
#include "ctime"
#include "cstdlib"

using namespace std;

int main()
{
	int num = 4;
	int num2 = 3;
	int num3;
	int sum = num + num2;
	int arry[sum];
	int *pointer;
	
	srand(time(NULL));
	for(int r = 0;r < sum;r++)
	{
		num3 = 20 + rand()% (50 - 20) + 1;
		arry[r] = num3;
		pointer = &arry[r];
		cout <<arry[r]<<endl;
		cout<<"";
	}
	cout <<*pointer++<<endl;
	
	
	cout<<"";
	cout<<"kagiso \t\t"<<"thabang \t";
	
	_getch();
	return 0;
}
