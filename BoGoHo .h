// BoGoHo.cpp this program is to calculate the amount customer owes

#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	//declaretion
	double priceIterm1, priceIterm2, amoDue;
	
	//inputs
	cout <<"Enter price of iterm 1: R"<<endl;
	cin >> priceIterm1;
	cout <<"Enter price for iterm 2: R"<<endl;
	cin >> priceIterm2;
	
	//processing
	
	if (priceIterm1 == priceIterm2)//then
	{
		amoDue = priceIterm1 + priceIterm2;
		cout << " no descount "<<endl;
	}
	
	if (priceIterm1 > priceIterm2)//then
	{
		amoDue = priceIterm1 + priceIterm2 * 0.5;
	}
	else
	{
		amoDue = priceIterm2 + priceIterm1 * 0.5;
	}
	
	cout <<"The total amount that the costomer owes is = R"<< amoDue <<endl;
	
	_getch();
	return 0;
}
