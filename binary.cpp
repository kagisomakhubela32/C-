#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int num,rem;
	
	cout <<"enter number: "<< endl;
	cin >> num;
	cout <<",-----------------------------------------,"<< endl;
	cout <<"                                           "<<endl;
	
	do
	{
		rem = num % 2 ; 
		cout << rem <<endl;
		num = num / 2 ;
	}
	while(num != 0);
	
	_getch();
	return 0;
	
}
