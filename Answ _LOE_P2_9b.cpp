#include "iostream"
#include "conio.h"

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
			areaSize = length * width;
			
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
