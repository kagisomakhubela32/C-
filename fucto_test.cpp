#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int spnNum = 5;
	int factovlu;
	int fuctoMax = 1;

	if(spnNum > 0)
	{
		for(int i = 1;i <= spnNum;i++)
		{
			fuctoMax = fuctoMax * i;
		}

		factovlu = fuctoMax;
		cout << factovlu << endl;
	}
	else
	{
		 cout << "invalid value" << endl;
	}

	
	
	return 0;
	_getch();
}
