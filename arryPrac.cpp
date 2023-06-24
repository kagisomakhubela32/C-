#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int num;
	int lineNum[5];
	
	for(int ind = 0;ind <= 4; ind++)
	{
		cout <<"Enter number: "<<endl;	
		cin >> lineNum[ind];
		
	}
	cout <<"the second number is = "<<lineNum[1]<<endl;
	
	_getch();
	return 0;
}
