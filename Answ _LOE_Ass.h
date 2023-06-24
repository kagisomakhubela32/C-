Outcome Assignment 5 (E)

Question 1 – [Part 1 Question 5 ]

class simdieclass
{
	private:
		int die;
		
	public:
		//functions to generate rendom numbers from 1 to 6; 
		
		int renDienum(int die )
		{
			srand(time(NULL));
			die = 1 + rand()% (6 - 1 ) + 1;
			
			return die;
		}
		
		void showdie()
		{
			
			cout << "the number on the die is = "<< renDienum(die) << endl;
			
		}
	
};

Question 2 – [Part 1 Question 6 ]

class rectroom
{
	private :
		double side1,side2,side3,side4;
		
	public :
		void calculate ();
};


Question 3 – [Part 2  Question 1 a - l ]

a. Class -> is a user drfined type or data structure delclared with
			the keyword class tha has data and function as its members whose accsess is 
			governed by the three access spacifiers private, protected or public.
 
b. Object -> is an instance of a class. when a class is defined, no memory is allocated
			 but it is instantiated memory is allocated
 
c. Declaration section -> provides not only a list of data “ingredients,” but also a list of method 
						  names and data types  
 
d. Implementation section -> is where the member methods declared in the declaration section are 
							 written to permit the initialization, assignment, and display capabilities 
							 implied by their names.
 
e. Instance variable -> is a variable defined in a class for which each instantiatedobjecy of the class 
						has a separate copy.
 
f. Member method -> is a procedure associated with a message and an object.
 
g. Data member -> are members that are drclared with any of the fundamental type as well as other types 
				  which including a pointer array types
 
h. Constructor -> is a specia type of subroutine called to create an object. it prepares the new object for use
				  often accepting arguments.
 
i. Class instance 
 
j. Services  
 
k. Method 
 
l. Interface 


Question 4 – [Part  2 Question 2 a - d ]

a.
class time
{
	private:
		int secs;
		int min;
		int hours;
	
	public:
		void setData(int secs, int min, int hours);;
		void showData(void);
};

b.
class complex
{
	private:
		double real;
		double imaginary;
		
	public:
	void setdData(double, double);
	void showData(void);
	
};

c.
class circle
{
	private:
		int xcenter, ycenter;
		double precision, radius;
	
	public:
		void setData(double, double, int, int);
		void showData(void);
	
};

d.
class system
{
	private:
		int const SIZE = 30;
		
		char computer[SIZE];
		char printer[SIZE];
		char screen[SIZE];
		
		double compPrice, scrnPrice;
		
	public:
		void setData(int, char [], char [], char [], double, double);
		void showData(void);
	
};


Question 5 – [Part 2  Question 4 a - d ]



Question 6 – [Part 2  Question 5 ]


Question 7 – [Part 2  Question 9 a – b ]

a.
class Rectangle
{
	private:
		double length, width, areaSize, perimeterSize;
		
	public:
	
		void setData(double length, double width);
	
		double perimeter(double length)
		{
			perimeterSize = length * 4;
			
			return perimeterSize;
		}
	
		double area(double length, double width)
		{
			areaSize = length * widen;
			
			return areaSize;
		}
	
		void showData(void)
		{
			cout << "the perimeter of the Rectangle = "<< perimeter(length) << endl;
			cout << "the area of the rectangle = " << area(length, width) << endl;
			
		}
};

b.
#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle
{
	private:
		double length, width, areaSize, perimeterSize;
		
	public:
	
		void setData(double length, double width);
	
		double perimeter(double length)
		{
			perimeterSize = length * 4;
			
			return perimeterSize;
		}
	
		double area(double length, double width)
		{
			areaSize = length * wideth;
			
			return areaSize;
		}
	
		void showData(void)
		{
			cout << "the perimeter of the Rectangle = "<< perimeter(length) << endl;
			cout << "the area of the rectangle = " << area(length, width) << endl;
			
		}
};

int main()
{
	Rectangle Rectangleclass;
	Rectangleclass.setData(7,8);
	Rectangleclass.showData();
	
	_getch();
	return 0;
}

Question 8 – [Part 3  Question 1 a - o ]


Question 9 – [Part 3  Question 4 ]
******
class TimeClass
{
	private:
		int secs,minut,hours;
		
	public:
		TimeClass(int, int, int);
		
		TimeClass(int timeNum)
		{
			getTime(timeNum);
			
			
		}
	
	
	
};

Question 10 – [Part 4  Question 5 a - b ]


Question 11 – [Part 4  Question 8 a - c ]

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

b.
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	char answer;

	employeeclass displayClass;
	displayClass.employeeclassShow(answer); 
	
	_getch();
	return 0;
}

c.***

Question 12 – [Part 4  Question 9 a - c ]





Question 13 – [Part 6  Question 1 a - j ]


Question 14 – [Part 7  Question 7 a - b]


Question 15 – [Part 7  Question 8 a - b ]


Question 16 – [Part 10  Question 1 a - c ]


Question 17 – [Part 10  Question 2 a - c ]