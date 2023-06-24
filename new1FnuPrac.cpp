#include "iostream"
#include "conio.h"
#include "iomanip"


using namespace std;

void add(int num , int num2)
{
	int sum = num + num2;
	
	cout <<"the sum is = "<<sum<<endl;
}

void mult(int num , int num2)
{
	int produ = num * num2;
	cout <<"the product is = "<<produ<<endl;
}

void subtrect(int num , int num2)
{
	int diff = num - num2;
	cout <<"the difference is = "<<diff<<endl;
}

double divid(int num , int num2)
{
	double diffcont;
	int cosnt = num / num2;
	
	return cosnt;
}

int main()
{
	int num, num2, sum, produ;
	char symbl;
	
	do
	{
		double diffcont;
		
		cout <<"please enter num1: "<<endl;
		cin >> num;
		cout <<"enter charector + or -"<<endl;
		cin >> symbl;
		cout <<"please enter num2: "<<endl;
		cin >> num2;
		
		switch(symbl)
		{
			case '+':
					add(num , num2);
			break;
			
			case '*':
					mult(num , num2);
			break;
			
			case '-':
					subtrect(num , num2);
			break;		
					
			case '/':
					diffcont = divid(num , num);
					cout << "the defferences is = "<<diffcont<<endl;
			break;
		}
	}
	while(num != 000);
		
	_getch();
	return 0;
}
