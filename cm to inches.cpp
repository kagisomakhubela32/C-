#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	double cmt,inch;
	
	cout <<"enter C M :"<< endl;
	cin >> cmt;
	
	inch = cmt / 2.54;
	
	cout << cmt << " cm is = " << inch << " inches"<<endl;
	
	_getch();
	return 0;
}
