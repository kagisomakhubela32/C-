#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	double prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
	
	for(int i = 0;i < 8;i++)
	{
		cout <<prices[i]<<endl;
	}
	
	_getch();
	return 0;
}
