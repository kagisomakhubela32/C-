#include "iostream"
#include "conio.h"
#include "cctype"

using namespace std;

void displayDayWk(char *dayOfWk[],int numDayOfWk)
{

	cout << "The day of the week entered is: "<< dayOfWk[numDayOfWk] << endl;
	
}

int main()
{
	int numDayOfWk;
	
	char *dayOfWk[] = {" ", "sunday", "monday", "tuesday", "wednesday", "thuesday", "friday"};
	
	cout << "Please enter number of day of the week: where 1 = (sunday) 2 = (monday) 3 = (tuesday) 4 = (wednesday) 5 = (thuesday) 6 = (friday): " << endl;
	cin >> numDayOfWk;
	
	cout << "" << endl;
	
	//cout << "The day of the week entered is: "<< dayOfWk[numDayOfWk] << endl;
	
	displayDayWk(dayOfWk,numDayOfWk);
	
	_getch();
	return 0;
}
