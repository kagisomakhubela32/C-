#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int w,x,y,z;
	
	x = 2;   
	y = x * 4 - 2; 
	z = x * y;
	  
	for (int w = 0; w <= x; w++)
	{    
		y = y % 3 + w + 3;    
		z = z + y;    
		cout<<"w =" <<w<<"x = "<< x<<"y ="<<"y =" <<y<<"z = "<< z<<endl; 
	}
	cout<< " ******" <<endl; 
	
	_getch();
	return 0;
}
