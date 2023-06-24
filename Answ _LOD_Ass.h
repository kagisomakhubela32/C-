Assingment 4 outcome D iostream files

part 1

Question 1 [part 1 question 8a - b]

a. 255

b. 255


Question 2 [part 2 question 3]

#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	string message;
	string texrfile;
	
	
	ofstream textfile;
	textfile.open("text.txt");
	
	cout << "Please enter text: " << endl;
	
	do
	{
		getline(cin,message);
		
		textfile << message;
		
	}while(message != "");
	
	
	textfile.close();
	
	_getch();
	return 0;
}



Question 3 [part 2 question 5a - d]

a.
#include "iostream"
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	ofstream empfile;
	empfile.open("employee.dat");
	
	empfile << "Anthony  A  10031  11.82  12/18/2010 \n"
			   "Burrows  W  10067  12.14  6/9/2011 \n"
			   "Fain     B  10083  10.79  5/18/2011 \n" 
			   "Janney   P  10095  12.57  9/28/2008 \n"
			   "Smith    G  10105  9.50   12/20/2006 \n";
	
	empfile.close();
	
	_getch();
	return 0;
}

b.*****
#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	
	ofstream empBkfile;
	ifstream empfile("employee.dat");
	
	empBkfile.open("employee.bak");
	
	empBkfile << empfile;
	
	empBkfile.close();
	
	
	_getch();
	return 0;
}

c.

d.

Question 4 [part 2 question 6a - b]

a.*******
#include "iostream"
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	string filename = "E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\employee.bak";
	int i = 0;
	
	ifstream empfile;
	string line = "";
	
	empfile.open(filename.c_str());
	
	while(empfile.good());
	{
		i = i + 1;
		
		getline(empfile,line);
		cout << i << ", "<< line << endl;
	}
	
	empfile.close();
	
	_getch();
	return 0;
}

b.



Question 5 [part 2 question 7a - b]

a.
#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream infofile;
	infofile.open("info.dat");
	
	infofile << "B Caldwell  555-88-2222  10.50  37 \n"
				"D Memcheck  555-77-4444  12.80  40 \n"
				"R Potter    555-77-6666  16.54  40 \n"
				"W Rosen     555-99-8888  11.80  35  \n";
	
	infofile.close();
	
	_getch();
	return 0;
}

b.*******
#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{

	char initial;
	string line = "";
	string name;
	string sSNum;
	double hourRate;
	int hourWokd;
	double grosPay;
	
		
	ofstream ininfofile("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\info.dat");
	
	while(ininfofile.good())
	{
		ininfofile >> initial >> name >> sSNum >> hourRate >> hourWokd >> grosPay;
		
		grosPa << hourRate * hourWokd;
		
		ininfofile << grosPa;
		
		exit(1);
	}
	
	
	ifstream outinfofile;("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\info.dat");
 	
 	
	while(outinfofile.good())
	{
		
		getline(outinfofile,line);
		
		cout << line << endl;
		
		exit(1);
	}
	
	outinfofile.close();
	
	_getch();
	return 0;
}



Question 6 [part 2 question 10a - b]

a.
#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	
	ofstream payfile;
	payfile.open("pay.dat");
	
	payfile << "Callaway, G.          16.00                40 \n"
			   "Hanson, P.            15.00                48 \n"
			   "Lasard, D.            16.50                35 \n"
			   "Stillman, W.          12.00                50 \n";
			   
	payfile.close();		   
	
	
	_getch();
	return 0;
}


b.
#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	ifstream opnpayfile;
	opnpayfile.open("pay.dat");
	
	string name;
	double rate;
	int hours;
	
	while(opnpayfile >> name >> rate >> hours)
	{
		cout << name << "\t" << rate << "\t" << hours << endl;
	}
	
	opnpayfile.close();
	
	_getch();
	return 0;
}


Question 7 [part 2 question 11a - b]

a.
#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream infofile;
	infofile.open("numbers.dat");
	
	infofile << "5  96  87  78  93  21  4  92  82  85  87  6  72  69  85  75  81  73 ";
	
	infofile.close();
	
	_getch();
	return 0;
}

b.
#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	int const SIZE = 18;
	int numArry[SIZE];
	int sum = 0;
	int numbers;
	double Avg;
	int i = 0;
	
	
	ifstream numfile("numbers.dat");
	
    do
	{
		
		numfile >> numbers;
		
		if(i > -1 || i < 6)
		{
			sum = 0;
		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the frist group is = " << Avg <<endl;
			
		}

			
				
		if(i >= 6 || i < 11)
		{
			sum = 0;

		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the second group is = " << Avg <<endl;
			
		}
		
		
				
		if(i >= 11 || i < 18)
		{
			sum = 0;
			
		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the thired group is = " << Avg <<endl;
			
		}


		i++; 
		
	}while(numfile.good());
	
	
	_getch();
	return 0;
}


Question 8 [part 2 question 13]




Question 9 [part 3 question 2]



Question 10 [part 3 question 4]