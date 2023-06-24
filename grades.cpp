#include "iostream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	double grade, mark, high = 0, low = 100;
	string name,namelow,namehigh;
	
	do
	{
		cout <<"enter name of student: "<<endl;
		getline(cin,name)
		
		cout <<"enter grade :"<<endl;
		cin >> grade;
		
		if(grade >= 0 && grade <= 100)
		{
			cout <<"grade is = "<<grade<<" % "<<endl;
			if(grade >= high)
			{
				high = grade;
				namehigh = name;
			}
		
			if(grade <= low)
			{
				low = grade;
				namelow = name;
			}
		}

		else
		{
			cout <<"you have enter an invalide grade lol "<<grade<<endl;
		}
	}
	while(grade != 999);
	
	cout <<"the higheat grade is from = "<<namehigh<< "with the scor of: "<<high<<"%"<<endl;
	cout <<"the lowest scor is from = "<<namelow<< "with the scor of: "<<low<<"%"<<endl;
	
	_getch();
	return 0;
}
