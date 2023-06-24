name: kagiso
surname: makhubela
student number: 216947533
group: F/6

Outcome Assingnment: A

Part 1

1.
	a. A list of 100 integer grades
		
		int grades[100];
		
	b. A list of 50 double-precision temperatures
		
		double preTemp[50];
		
	c. A list of 30 characters, each representing a code 
		
		char code[30];
		
	d. A list of 100 integer years 
	
		int years[100];
		
	e. A list of 32 double-precision velocities 
	
		double precVel[32];
		
	f. A list of 1000 double-precision distances 
	
		double precDist[1000];
		

2.	
	a. int grades[20]

		The correct notetion for the first element = grades[0];
		The correct notetion for the third element = grades[2];
		The correct notetion for the seventh element = grades[6];
		
	b. double prices[10] 
	
		The correct notetion for the first element = prices[0];
		The correct notetion for the third element = prices[2];
		The correct notetion for the seventh element = prices[6];
		
	c. double amounts[16] 
	
		The correct notetion for the first element = amounts[0];
		The correct notetion for the third element = amounts[2];
		The correct notetion for the seventh element = amounts[6];
		
	d. int dist[15]
	
		The correct notetion for the first element = dist[0];
		The correct notetion for the third element = dist[2];
		The correct notetion for the seventh element = dist[6];
		
	e. double velocity[25]
	
		The correct notetion for the first element = velocity[0];
		The correct notetion for the third element = velocity[2];
		The correct notetion for the seventh element = velocity[6];
		
	f. double time[100]

		The correct notetion for the first element = time[0];
		The correct notetion for the third element = time[2];
		The correct notetion for the seventh element = time[6];
		
		
3.
 a.

	a. int grades[20]
	
		cin >> grades[0];
		cin >> grades[2];
		cin >> grades[6];
		
	b. double prices[10]
		
		cin >> prices[0];
		cin >> prices[2];
		cin >> prices[6];
		
	c. double amounts[16]
		
		cin >> amounts[0];
		cin >> amounts[2];
		cin >> amounts[6];
		
	d. int dist[15]
		
		cin >> dist[0];
		cin >> dist[2];
		cin >> dist[6];
		
	e. double velocity[25]
	
		cin >> velocity[0];
		cin >> velocity[2];
		cin >> velocity[6];
		
	f. double time[100]
	
		cin >> time[0];
		cin >> time[2];
		cin >> time[6];
		
 b.
	a. int grades[20]
	
		for(int i = 0;i < 20;i++)
		{
			cin >> grades[i];
		}
		
	b. double prices[10]
	
		for(int i = 0;i < 10;i++)
		{
			cin >> prices[i];
		}
		
	c. double amounts[16]
	
		for(int i = 0;i < 16;i++)
		{
			cin >> amounts[i];
		}
		
	d. int dist[15]
		
		for(int i = 0;i < 15;i++)
		{
			cin >> dist[i];
		}
		
	e. double velocity[25]
		
		for(int i = 0;i < 25;i++)
		{
			cin >> velocity[i];
		}
		
	f. double time[100]
	
		for(int i = 0;i < 100;i++)
		{
			cin >> time[i];
		}
		
		
4.
 a.
	a. int grades[20]
	
		cout << "the following are the values of the first, third, and seventh elements respectively "<<grades[0]<<", "<<grades[2]<<", "<<grades[6]<< endl;
		
	b. double prices[10]
	
		cout << "the following are the values of the first, third, and seventh elements respectively "<<prices[0]<<", "<<prices[2]<<", "<<prices[6]<< endl;
		
	c. double amounts[16]
		
		cout << "the following are the values of the first, third, and seventh elements respectively "<<amounts[0]<<", "<<amounts[2]<<", "<<amounts[6]<< endl;
		
	d. int dist[15]
		
		cout << "the following are the values of the first, third, and seventh elements respectively "<<dist[0]<<", "<<dist[2]<<", "<<dist[6]<< endl;
		
	e. double velocity[25]
	
		cout << "the following are the values of the first, third, and seventh elements respectively "<<velocity[0]<<", "<<velocity[2]<<", "<<velocity[6]<< endl;
	
	f. double time[100]
	
		cout << "the following are the values of the first, third, and seventh elements respectively "<<time[0]<<", "<<time[2]<<", "<<time[6]<< endl;
	
	
 b.
	a. int grades[20]
		
		for(int i = 0;i < 20;i++)
		{
			cout << grades[i];
		}
		
	b. double prices[10]
		
		for(int i = 0;i < 10;i++)
		{
			cout << prices[i];
		}
		
	c. double amounts[16]
		
		for(int i = 0;i < 16;i++)
		{
			cout << amounts[i];
		}
		
	d. int dist[15]
		
		for(int i = 0;i < 15;i++)
		{
			cout << dist[i];
		}
		
	e. double velocity[25]
		
		for(int i = 0;i < 25;i++)
		{
			cout << velocity[i];
		}
		
	f. double time[100]
		
		for(int i = 0;i < 100;i++)
		{
			cout << time[i];
		}
	
5.
	a. for (m = 1; m <= 5; m++) 
		cout << a[m] << “ “; 
	
		= 1 2 3 4 5 
		
	b. for (k = 1; k <= 5; k = k + 2) 
		cout <<  a[k] << “ “; 
	
		= 1 3 5
		
	c. for (j = 3; j <= 10; j++) 
		cout << b[j] << “ “;

		= 3 4 5 6 7 8 9 10
		
	d. for (k = 3; k <= 12; k = k + 3) 
		cout << b[k] << “ “; 
	
		= 3 6 9 12
		
	e. for (i = 2; i < 11; i = i + 2) 
		cout << c[i] << “ “;

		= 2 4 6 8 10
		
		
6.

 a.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 9;
		double prices[SIZE];
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"place enter the prices for iterm "<<endl;
			cin >> prices[i];
			
		}
		
		cout <<"The data is as fallows ";
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<prices[i]<<", ";
		}
		
		_getch();
		return 0;
	}
	
	
 b.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 9;
		double prices[SIZE];
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"place enter the prices for iterm "<<endl;
			cin >> prices[i];
			
		}
		
		cout <<"The data is as fallows: "<<endl;
		cout<<""<<endl;
		
		for(int i = 0;i < 3;i++)
		{
			cout <<prices[i]<<" ";
		}
		
		cout<<endl;
		cout<<""<<endl;
		
		for(int i = 3;i < 6;i++)
		{
			cout <<prices[i]<<" ";
		}
		
		cout<<endl;
		cout<<""<<endl;
		
		for(int i = 6;i < 9;i++)
		{
			cout <<prices[i]<<" ";
		}
		
		_getch();
		return 0;
	}
	
	
7.
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 8;
	int grade[SIZE];
	int total = 0;
	double Avg;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter grade: "<<endl;
		cin >> grade[i];
		
		total = total + grade[i];
		
	}
	
	Avg = total / SIZE;
	
	cout <<"The numbers are as fallows: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<grade[i]<<", ";
	}
	
	cout <<""<<endl;
	
	cout <<"The average is = "<< Avg <<endl;
	
	
	_getch();
	return 0;
}


8.
 a.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 10;
		int Fmax[SIZE];
		int max = 0;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter an integer number"<<endl;
			cin >>Fmax[i];
			
			if(Fmax[i] >= max)
			{
				max = Fmax[i];
			}
			
		}
		
		
		_getch();
		return 0;
	}

 b.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 10;
		int Fmax[SIZE];
		int max = 0;
		int indx;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter an integer number"<<endl;
			cin >>Fmax[i];
			
			if(Fmax[i] >= max)
			{
				max = Fmax[i];
				indx = i;
			}
			
		}
		cout <<"Thehe maximum value is: "<< max << endl;
		cout <<"This is element number "<< indx <<" in the list of numbers"<<endl;
		
		
		_getch();
		return 0;
	}

 c.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 10;
		int Fmin[SIZE];
		int min = 0;
		int indx;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter an integer number"<<endl;
			cin >>Fmin[i];
			
			if(Fmin[i] <= min)
			{
				min = Fmin[i];
				indx = i;
			}
			
		}
		cout <<"Thehe minimum value is: "<< min << endl;
		cout <<"This is element number "<< indx <<" in the list of numbers"<<endl;
		
		
		_getch();
		return 0;
	}

9.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		
		int const SIZE = 5;
		int Array[SIZE];
		
		cout <<"Please enter 5 integer numbers: "<<endl;
		
		for(int i = 0;i < SIZE;i++)
		{
			cin >> Array[i];
		}
		
		cout <<""<<endl;
		
		for(int i = SIZE;i > -1;i--)
		{
			cout << Array[i]<<" ";
		}
		
		_getch();
		return 0;
	}


10.
 a.
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 14;
	int grades[SIZE];
	double deviation[SIZE];
	int total = 0;
	double Avg;
	
	cout <<"Please enter grades: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cin >> grades[i];
		total = total + grades[i];
		
	}
	Avg = total / SIZE;
	
	for(int i = 0;i < SIZE;i++)
	{
		deviation[i] = ((1/SIZE)*(i - Avg)^2)^(1/2)
		
		cout <<"The deviation of grade "<<grades[i]<<" is = "<<deviation[i]<<" ";
		
	}
	
	
	
	_getch();
	return 0;
}

b.










11.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 10;
		double price[SIZE];
		double amount[SIZE];
		double total[SIZE];
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter the price and the amount respectively"<<endl;
			cin >>price[i]>>amount[i];
			
			total[i] = price[i] * amount[i];
			
		}
		
		cout <<""<<endl;
		
		cout <<"toral \t price \t amount \t"<<endl;
		
		cout <<""<<endl;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<total[i]<<"\t "<<price[i]<<" \t"<<amount[i]<<"\t "<<endl;
		}
		
		
		_getch();
		return 0;
	}

12.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 50;
		int peopleTypes[SIZE];
		int temnt;
		int sumOf1s = 0;
		int sumOf2s = 0;
		int sumOf3s = 0;
		int sumOf4s = 0;
		
		cout<<"Please the type of the person: 1, 2, 3, 4 enter -1 to end the program: "<<endl;
		
		for(int i = 0;i < SIZE;i++ )
		{
			
			cin >> peopleTypes[i];
				
			if(peopleTypes[i] == -1)
			{
				i = SIZE;
			}	
			else if(peopleTypes[i] == 1)
			{
				sumOf1s = sumOf1s + 1;
			}
			else if(peopleTypes[i] == 2)
			{
				sumOf2s = sumOf2s + 1;
			}
			else if(peopleTypes[i] == 3)
			{
				sumOf3s = sumOf3s + 1;
			}
			else if(peopleTypes[i] == 4)
			{
				sumOf4s = sumOf4s + 1;
			}
			else
				cout<<"incorrect input Please enter the correct preson type: "<<endl;
				
		}
		
		
		cout<<""<<endl;
		cout<<"The total number of infants in present in the function is = "<<sumOf1s<<endl;
		cout<<""<<endl;
		cout<<"The total number of children in present in the function is = "<<sumOf2s<<endl;
		cout<<""<<endl;
		cout<<"The total number of teenagers in present in the function is = "<<sumOf3s<<endl;
		cout<<""<<endl;
		cout<<"The total number of adults in present in the function is = "<<sumOf4s<<endl;
			

		
		_getch();
		return 0;
	}


13.
 a.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 1000;
		double grades[SIZE];
		double sum = 0;
		double Avg;
		int count = 0;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter grade: "<<endl;
			cin >> grades[i];
			
			if(grades[i] > 0)
			{
				sum = sum + grades[i];
				count = count + 1;
			}
			else
				i = SIZE;
			
		}
		
		Avg = sum / count;
		
		cout <<"the sum of the grades entered is = "<<sum<<endl;
		cout <<""<<endl;
		cout <<"the Average of the grades entered is = "<<Avg<<endl;
		cout <<""<<endl;
		
		for(int i = 0;i < count;i++)
		{
		
			if(grades[i] < Avg)
			{
				cout <<"*"<<grades[i]<<endl;
			}
			else
				cout << grades[i] <<endl;
			
		}
		
		
		_getch();
		return 0;
	}

 b.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 1000;
		double grades[SIZE];
		double sum = 0;
		double Avg;
		int count = 0;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter grade: "<<endl;
			cin >> grades[i];
			
			if(grades[i] > 0)
			{
				sum = sum + grades[i];
				count = count + 1;
			}
			else
				i = SIZE;
			
		}
		
		Avg = sum / count;
		
		cout <<"the sum of the grades entered is = "<<sum<<endl;
		cout <<""<<endl;
		cout <<"the Average of the grades entered is = "<<Avg<<endl;
		cout <<""<<endl;
		
		for(int i = 0;i < count;i++)
		{
		
			if(grades[i] < Avg)
			{
				cout <<"*"<<grades[i]<<endl;
			}
			else
				cout << grades[i] <<endl;
		}
		
		cout<<""<<endl;
		
		for(int i = 0;i < count;i++)
		{
			if(grades[i] >= 90)
			{	
				cout <<grades[i]<<" = A "<<endl;
			}	
			else if(grades[i] >= 80 && grades[i] < 90)
			{
				cout <<grades[i]<<" = B "<<endl;
			}
			else if(grades[i] >= 70 && grades[i] < 80)
			{
				cout <<grades[i]<<" = C "<<endl;
			}
			else if(grades[i] >= 60 && grades[i] < 70)
			{
				cout <<grades[i]<<" = D "<<endl;
			}
			else
				cout <<grades[i]<<" = F "<<endl;

		}
		
		_getch();
		return 0;
	} 



14.
	#include "iostream"
	#include "conio.h"
	#include "ctime"
	#include "cstdlib"

	using namespace std;

	int main()
	{
		int const SIZE = 1000;
		int random[SIZE];
		int num;
		int count1_50 = 0;
		int countRest = 0;
		
		srand(time(NULL));
		
		for(int i = 0;i < SIZE;i++)
		{
			num = 1 + rand()% (100 - 1) + 1;
			random[i] = num;
			
			if(random[i] >= 1 && random[i] <= 50)
			{
				count1_50 = count1_50 + 1;
			}
			else
				countRest = SIZE - count1_50;
		}
		
		cout <<"The total number of the numbers between 1 and 50 is = "<<count1_50<<endl;
		cout <<"The total number of numbers greater tha 50 = "<<countRest<<endl;
		
		
		_getch();
		return 0;
	}


15.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 10;
		double raw[SIZE];
		double sorted[SIZE];
		double temp;
		
		//promt massege 
		cout <<"Please enter numbers: "<<endl;
		
		for(int i = 0;i < SIZE;i++)
		{
			//input
			cin >> raw[i];
		}
		
		for(int i = 0;i < SIZE;i++)
		{
			for(int x = 0;x < SIZE;x++)
			{
				if(raw[i] > sorted[x])
				{
					temp = raw[i];
					raw[i] = sorted[x];
					sorted[x] = temp;
		
				}
								
			}
			
		}

		cout <<""<<endl;
		
		for(int x = 0;x < SIZE;x++)
		{
			cout <<sorted[x] << endl;
		}
		
		
		
		_getch();
		return 0;
	}



Part 2
1.
 a.A list of 10 integer grades: 89, 75, 82, 93, 78, 95, 81, 88, 77, and 82
	
	int grades[10] = {89, 75, 82, 93, 78, 95, 81, 88, 77, 82};
	
 b. A list of five double-precision amounts: 10.62, 13.98, 18.45, 12.68, and 14.76
 
	double amounts[] = {10.62, 13.98, 18.45, 12.68, 14.76};
 
 c. A list of 100 double-precision interest rates, with the first six rates being 6.29, 6.95, 7.25,
i
	double intRate[100] = {6.29, 6.95, 7.25,}; 
 
 d. A list of 64 double-precision temperatures, with the first 10 temperatures being 78.2, 69.6,
 
	double temperatures[64] = {78.2, 69.6,};
 
 e. A list of 15 character codes, with the first seven codes being f, j, m, q, t, w, and z	

	char codes[7] = {'f', 'j', 'm', 'q', 't', 'w', 'z'};


2
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	double prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
	
	for(int i = 0;i < 8;i++)
	{
		cout <<prices[i]<<endl;
	}
	
	_getch();
	return 0;
}

3.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 9;
		double fmax = 0;
		double fmin = 1000;
		double slopes[SIZE] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24,6.92};
		
		for(int i = 0;i < SIZE;i++)
		{
			if(slopes[i] > fmax)
			{
				fmax = slopes[i];
			}
			if(slopes[i] < fmin)
			{
				fmin = slopes[i];
			}
			
		}
		// display max and min values
		
		cout <<"The maximum value is = "<<fmax<<endl;
		cout <<"The mimimum value is = "<<fmin<<endl;
		
		
		_getch();
		return 0;
	}


4.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	int main()
	{
		int const SIZE = 5;
		double prices[SIZE] = { 9.92, 6.32, 12.63, 5.95, 10.29};
		double amounts[SIZE];
		int units[SIZE];
		
		//processing
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<"Please enter unit: "<<endl;
			cin >> units[i];
			
			amounts[i] = prices[i] * units[i];
			
		}
		
		//display outputs
		
		cout <<""<<endl;
		
		cout <<"Price  unitds  Amount"<<endl;
		
		cout <<""<<endl;
		
		for(int i = 0;i < SIZE;i++)
		{
			cout <<prices[i]<<"\t"<<units[i]<<" \t"<<amounts[i]<<endl;
		}
		
		_getch();
		return 0;
	}


5.
	#include "iostream"
	#include "conio.h"
	#include "iomanip"

	using namespace std;

	int main()
	{
		int const SIZE = 20;
		int numbers[SIZE] = {12 ,54 ,36 ,75 ,-56 ,0 ,0 ,78 ,-4 ,5 ,9 ,-2 ,-27 ,3 ,7 ,8 ,50 ,9 ,3 ,-6};
		int negative[SIZE];
		int positive[SIZE];
		int countP = 0;
		int countN = 0;

		
		//processing 
		
		for(int i = 0;i < SIZE;i++)
		{
			if(numbers[i] >= 0)
			{
				positive[i] = numbers[i];
				countP = countP + 1;
			}
			else if(numbers[i] < 0)
			{
				negative[i] = numbers[i];
				countN = countN + 1;
			}
				
			
		}
		
		//outputs
		
		cout <<"negative"<<endl;
		
		for(int i = 0;i < countN;i++)
		{
			cout <<negative[i]<<endl;
		}
		
		cout <<""<<endl;
		
		cout <<"positive"<<endl;
		
		for(int i = 0;i < countP;i++)
		{
			cout <<positive[i]<<endl;
		}
		
		
		_getch();
		return 0;
	}


6.
	char goodstr1[] = {'G', 'o', 'o', 'd', ' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g'};
	
	char goodstr1[12] = {'G', 'o', 'o', 'd', ' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g'};
	
	int const SIZE = 12;
	char goodstr1[SIZE] = {'G', 'o', 'o', 'd', ' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g'};


7.
 a.	char message1[] = {'I', 'n', 'p', 'u', 't', ' ', 't', 'h', 'e', ' ', 'F', 'o', 'l', 'l', 'o', 'w', 'i', 'n', 'g', ' ', 'D', 'a', 't', 'a'};
 
	string message2[] = {"------------"};
	
	string message3[] = {"Enter the Date: "};
	
	string message4[] = {"Enter the Account Number: "};
	

 b.
 
 
 8.
  a.
  b.
  c.
  d.
	

Part 3

1.
	
	void sortArray(double Array[], int NUMGRADES);
	
	void sortArray(double [], int)
	
2.

	 char findKey(char select[], int  NUMKEYS); 
	
	 char findKey(char select[], 256);

3.




4.
	#include "iostream"
	#include "conio.h"

	using namespace std;


	void show(double rates[], int SIZE)
	{
		for(int i = 0;i < SIZE;i++)
		{
			cout << rates[i] << endl;
		}
	}

	int main()
	{
		int const SIZE = 9;
		double rates[] = { 6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
		
		show(rates, SIZE);
		
		_getch();
		return 0;
	}

5.
 a.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	void display(char string[], int SIZE)
	{
		for(int i = 0;i < 16;i++)
		{
			cout << string[i];
		}
	}

	int main()
	{
		int const SIZE = 16;
		char messege[] = {"Vacation is near"};
		
		display(messege, SIZE);

		_getch();
		return 0;
	}

 *b.
#include "iostream"
#include "conio.h"

using namespace std;

void display(char string[], int SIZE)
{
	for(int i = 0;i < SIZE;i++)
	{
		cout << string[i];
	}
}

int main()
{
	int const SIZE = 8;
	char messege[] = {"Vacation is near"};
	
	display(messege, SIZE);

	_getch();
	return 0;
}


6.
	#include "iostream"
	#include "conio.h"

	using namespace std;

	void extend(double price[], double quantity[], double amount[], int SIZE)
	{
		
		for(int i = 0;i < SIZE;i++)
		{
			amount[i] = price[i] * quantity[i];
		
		}
		
	}

	int main()
	{
		int const SIZE = 10;
		double price[SIZE] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
		double quantity[SIZE]  = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
		double amount[SIZE];
		
		for(int i = 0;i < SIZE;i++)
		{
			extend(price, quantity, amount, SIZE);
			
			cout << amount[i] << endl;
		}
		
		_getch();
		return 0;
	}

*7.
#include "iostream"
#include "conio.h"

using namespace std;

double  calcavg(int testvals[], int SIZE, int sum)
{
	for(int i = 0;i < SIZE;i++)
	{
		sum = sum + testvals[i];
	}
	
	return sum / SIZE;
}

double variance(int testvals[],int SIZE)
{
	for(int i = 0;i < SIZE;i++)
	{
		variant[i] = (calcavg(testvals, SIZE, sum) - testvals[i])^2
	}
	
}

int main()
{
	int const SIZE = 14;
	int testvals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
	int sum = 0;
	
	cout << "The Averege of the valuse is = " << calcavg(testvals, SIZE, sum) <<endl;
	
	cout <<""<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout << variance(testvals, SIZE) <<endl;
	}
	
	_getch();
	return 0;
}




Part 4

1.
 a. An array of integers with 6 rows and 10 columns.

	int Array[6][10];
 
 b. An array of integers with 2 rows and 5 columns.

	int Array[2][5];
       
 c. An array of characters with 7 rows and 12 columns.

	char Array[7][12];
       
 d. An array of characters with 15 rows and 7 columns.

	char Array[15][7];
 
 e. An array of double-precision numbers with 10 rows and 25 columns.

	double Array[10][25];
 
 f. An array of double-precision numbers with 16 rows and 8 columns.

	double Array[16][8];
	

	
2.
	8  16 9 
	52 3  15 
	27 6  14 
	25 2  10

3.
 a.
	 #include "iostream"
	 #include "conio.h"
	 
	 using namespace std;
	 
	 int main()
	 {
		 int  val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
		 int total = 0;
		 
		 for(int i = 0;i < 3;i++)
		 {
			 for(int j = 0;j < 4;j++)
			 {
				 total = total + val[i][j];
			 }
			 
		 }
		 
		 cout <<"The total of all the elements is = "<<total<<endl;
		 
		 _getch();
		 return 0;
	 }


 *b.
 #include "iostream"
 #include "conio.h"
 
 using namespace std;
 
 int main()
 {
	 int  val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	 int total = 0;
	 int ArrayTotalRow[3];
	 
	 for(int i = 0;i < 3;i++)
	 {
		 for(int j = 0;j < 4;j++)
		 {
			ArrayTotalRow[i] = ArrayTotalRow[i] + val[i][j];
		 }
		cout <<"The total for row "<< i <<" is = "<<ArrayTotalRow[i]<<endl; 
	 }
	 
	 _getch();
	 return 0;
 }


7.
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	double grades[3][5];
	int count1 = 0; //for greades <= 60
	int count2 = 0; //for grades <= 70
	int count3 = 0; //for grades <= 80
	int count4 = 0; //for grades <= 90
	int count5 = 0; //for grades > 90 
	
	for(int r = 0;r < 3;r++)
	{
		for(int c = 0;c < 5;c++)
		{
			if(grades[r][c] <= 60)
			{
				count1 = count + 1;
			}
			else if(grades[r][c] > 60 && grades[r][c] <= 70)
			{
				count2 = count2 + 1;
			}
			else if(grades[r][c] > 70 && grades[r][c] <= 80)
			{
				count3 = count3 + 1;
			}
			else if(grades[r][c] > 80 && grades[r][c] <= 90)
			{
				count4 = count4 + 1;
			}
			else
				count5 = count5 + 1;
		}
	}
	
	
	_getch();
	return 0;
}






