#include "iostream"
#include "conio.h"

using namespace std;

class employeeclass
{
	private:
		int ID;
		double payRate;
		double hours;
		char answer;
		
	public:
		void ifYes(int ID, double hours,double payRate)
		{
			cout << "Enter ID for new employee: " << endl;
			cin >> ID;
			
			cout << "Enter payRate for new employee: " << endl;
			cin >> payRate;
			
			cout << "Enter hours employee should work for each week: " << endl;
			cin >> hours;
		}
		
		void ifNo(int ID, double hours,double payRate)
		{
			cout << "Employee ID: "<< ID << endl;
			cout << "Pay rate: "<< payRate << endl;
			cout << "hours per week: " << hours << endl;
		}
		
	
		void employeeclassShow(char answer)
		{
			cout << "Do you need to enter data for a new employee ? Y or N: " << endl;
			cin >> answer;
			
			if(answer == 'y' || answer == 'Y' )
			{
				ifYes(ID,hours,payRate);
			}
			else
			{
				ifNo(ID, hours,payRate);
			}
		}
	
};

int main()
{
	char answer;

	employeeclass displayClass;
	displayClass.employeeclassShow(answer); 
	
	_getch();
	return 0;
}
