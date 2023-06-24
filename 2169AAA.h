Question 1 – [Part 1  Question 8 a - b ]


a.	255 characters 

b.	512 

Question 2 – [Part 2 Question 3 ]

#include "iostream"
#include "fstream"
#include "cstdlib"   
#include "string"    
#include "iomanip"
#include "conio.h"
   
using namespace std;

int main()
{
	string filename = "text.dat";  
	ofstream outFile;
	ifstream inFile;
	string i;
	outFile.open(filename.c_str());
	inFile.open(filename.c_str());
	
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	// set the output file stream formats
	inFile >> setiosflags(ios::fixed)
			>> setiosflags(ios::showpoint)
			>> setprecision(2);
	// send data to the file
	
	cout << "Enter the words" << endl;
	cin >> i;
	inFile >> i;

	outFile << i;
	
	inFile.close();
	outFile.close();
	
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
		
	_getch();
	return 0;
}

Question 3 – [Part 2  Question 5 a - d ]
a)
#include "iostream"
#include "fstream"
#include "cstdlib"   
#include "string"   
#include "iomanip"
#include "conio.h"
   
using namespace std;

int main()
{
	string filename = "text.dat"; 
	ofstream outFile;
	ifstream inFile;
	string i;
	outFile.open(filename.c_str());
	inFile.open(filename.c_str());
	
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	
	inFile >> setiosflags(ios::fixed)
		>> setiosflags(ios::showpoint)
		>> setprecision(2);
	// send data to the file
	cout << "Enter the words" << endl;
	cin >> i;
	inFile >> i;

	outFile << i;
	inFile.close();
	outFile.close();
	
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
		
	_getch();
	return 0;
}

b) 
#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"
   
using namespace std;

int main()
{
	string filename2 = "employee.dak";
	string filename = "employee.dat"; 
	
	string line;
	ifstream inFile;
	ifstream inFile2;
	ofstream outFile;
	inFile.open(filename.c_str());
	inFile2.open(filename2.c_str());
	outFile.open(filename2.c_str());
	
	if (inFile.fail())  
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
			
		exit(1);
	}
	
	while (getline(inFile, line))
	   
		outFile << line;


	    inFile2.close();
	    inFile.close();
		outFile.close();
		
	_getch();
	return 0;
}

Question 4 – [Part 2  Question 6 a - b ]
a)
#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"  

using namespace std;

int main()
{
	string filename = "employee.dat";  
	string line;
	ifstream inFile;
	ofstream outFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());
	
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
			
		exit(1);
	}
	// read and copy the file's contents
	for (int i = 1; i < 5; i++)
	{
		cin >> line;
		inFile >> i >> line;
		outFile << i << line << endl;
	}
	
		inFile.close();
		outFile.close();
	
	_getch();
	return 0;
}

b)

#include "iostream"
#include "fstream"
#include "cstdlib"   
#include "string"
#include "conio.h"   
#include "iomanip"
  
using namespace std;

int main()
{
	string filename = "employee.dat";  // put the filename up front
	string line;
	ifstream inFile;
	ofstream outFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());
	outFile.open("prn");
	
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and copy the file's contents
	for (int i = 1; i < 5; i++){
		cin >> line;
		inFile >> i >> line;
		outFile << i << line << endl;
	}
		inFile.close();
		outFile.close();
		
	
	_getch();
	return 0;
}



Question 5 – [Part 2  Question 7 a - b ]

a)

#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"
#include "string"    
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "info.dat";  
	ofstream outFile;
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	
	outFile << "B Caldwell"  << setw(10) << 555<< "-" <<88<<"-" <<2222 << setw(10) << 10.50 << setw(10) << 37 << endl
		    << "D Memcheck " << setw(10) << 555 << "-" << 77 << "-" << 4444 << setw(10) << 12.80 << setw(10) << 40 << endl
		    << "R Potter " << setw(10) << 555 << "-" << 77 << "-" << 6666 << setw(10) << 16.54 << setw(10) << 40 << endl
		    << "W Roser" << setw(10) << 555 << "-" << 99 << "-" << 8888 << setw(10) << 11.80 << setw(10) << 35 << endl;
		
	outFile.close();
	
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
	_getch();
	return 0;
}

b)


#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "info.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	double money1 = 10.50 * 37;
	double money2 = 12.80 * 40;
	double money3 = 16.54 * 40;
	double money4 = 11.80 * 35;
	
	outFile << "B Caldwell"  << setw(10) << 555<< "-" <<88<<"-" <<2222 << setw(10) << money1 << endl
		    << "D Memcheck " << setw(10) << 555 << "-" << 77 << "-" << 4444 << setw(10) << money2 << endl
		    << "R Potter " << setw(10) << 555 << "-" << 77 << "-" << 6666 << setw(10) << money3 << endl
		    << "W Roser" << setw(10) << 555 << "-" << 99 << "-" << 8888 << setw(10) << money4 << endl;
		
	outFile.close();
	
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
	_getch();
	return 0;
}


Question 6 – [Part 2  Question 10 a - b ]

a)
#include "iostream"
#include "fstream"
#include "cstdlib"
#include "conio.h"   
#include "string"   
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "pay.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file



	outFile << "Callaway, G." << setw(10) << 16.00 << setw(10) << 40 <<  endl
			<< "Hanson, P."<< setw(10) << 15.00 << setw(10) <<  48 << endl
			<< "Lasard, D." << setw(10) << 16.50<< setw(10) << 35 << endl
			<< "Stillman, W." << setw(10) << 12.50 << setw(10) << 50 << endl;
		
		
		
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		 
	_getch();
	return 0;
}

b)

#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "pay.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	double regularpay = 16 * 40;
	double regularpay2 = 15 * 40;
	double regularpay3 = 16.5 * 35;
	double regularpay4 = 12.50 * 40;

	double OvertimePay = 0;
	double OvertimePay2 = (15 * 8)*1.5;
	double OvertimePay3 = 0;
	double OvertimePay4 = (10 * 12.50)*1.5;

	double GrossPay = regularpay + OvertimePay;
	double GrossPay2 = regularpay2 + OvertimePay2;
	double GrossPay3 = regularpay3 + OvertimePay3;
	double GrossPay4 = regularpay4 + OvertimePay4;



	outFile << "Callaway, G." << setw(10) << 16.00 << setw(10) << 40 <<setw(10) << regularpay << setw(10) << OvertimePay <<setw(10) << GrossPay<<  endl
			<< "Hanson, P." << setw(10) << 15.00 << setw(10) << 48 << setw(10) << regularpay2 << setw(10) << OvertimePay2 << setw(10) << GrossPay2 << endl
			<< "Lasard, D." << setw(10) << 16.50 << setw(10) << 35 << setw(10) << regularpay3 << setw(10) << OvertimePay3 << setw(10) << GrossPay3 << endl
			<< "Stillman, W." << setw(10) << 12.50 << setw(10) << 50 << setw(10) << regularpay4 << setw(10) << OvertimePay4 << setw(10) << GrossPay4 << endl;
		
		
		
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
	_getch();
	return 0;
}

Question 7 – [Part 2  Question 11 a - b ]
a)

#include "iostream"
#include "conio.h"
#include "fstream"
#include "cstdlib"   
#include "string"   
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "numbers.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	outFile << 5 << setw(10) << 96 << setw(10) << 87 << setw(10) << 78 << setw(10) 
		    << 93 << setw(10) << 21 << setw(10) << 4 << setw(10) << 92 << setw(10) 
		    << 82 << setw(10) << 85 << setw(10) << 87 << setw(10) << 6 << setw(10)
			<< 72 << setw(10) << 69 << setw(10) << 85 << setw(10) << 75 << setw(10)
			<< 81 << setw(10) << 73;
			
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
	_getch();
	return 0;
}

b)


#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"

using namespace std;

int main()
{
	string filename = "numbers.dat";  // put the filename up front
	ofstream outFile;
	ifstream inFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());
	

	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	// send data to the file
	//outFile << 5 <<  96  << 87  << 78 << 93 <<  21 << 4 <<  92 << 82 
	//	<< 85  << 87 << 6 << 72 << 69 << 85 << 75 << 81 << 73;

	while (inFile.good())
	{
		double InPut[] = { 5, 96, 87, 78, 93, 21, 4, 92, 82, 85, 87, 6, 72, 69, 85, 75, 81, 73 };
		double total = 0;

		inFile >> InPut[0];
		cout << "The number of elements in this group is " << InPut[0] << endl;
		cout << "The data in this group is: ";

		for (int i = 0; i <= 5; i++)
		{
			inFile >> InPut[i];
			total = total + InPut[i];
			cout << InPut[i] << " ";
			outFile << InPut[i] << " ";

		}

		cout << endl << "Average = " << (total - InPut[0]) / InPut[0] << endl;  // Sum divided by InPut
		outFile << endl << "Average = " << (total - InPut[0]) / InPut[0] << endl;
		total = 0; // Reset Total
		
		inFile >> InPut[6];
		cout << "The number of elements in this group is " << InPut[6] << endl;
		cout << "The data in this group is: ";
		
		for (int j = 6; j <= 10; j++)
		{
			inFile >> InPut[j];
			total = total + InPut[j];
			cout << InPut[j] << " ";
			outFile << InPut[j] << " ";
		}
		
		cout << endl << "Average = " << (total - InPut[6]) / InPut[6] << endl;  // Sum divided by InPut
		outFile << endl << "Average = " << (total - InPut[6]) / InPut[6] << endl;
		total = 0; // Reset Total
		
	inFile >> InPut[11];
	cout << "The number of elements in this group is " << InPut[11] << endl;
	cout << "The data in this group is: ";
	
		for (int k = 11; k < 18; k++)
		{
			inFile >> InPut[k];
			total = total + InPut[k];
			cout << InPut[k] << " ";
			outFile << InPut[k] << " ";
		}
		
	    cout << endl << "Average = " << (total - InPut[11]) / InPut[11] << endl;  // Sum divided by InPut
		outFile << endl << "Average = " << (total - InPut[11]) / InPut[11] << endl;
		total = 0; // Reset Total
	}
			
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
		
		
	_getch();
	return 0;
}


Question 8 – [Part 2  Question 13 ]

#include "iostream"
#include "fstream"
#include "conio.h"
#include "cstdlib"   
#include "string"    
#include "iomanip"
   
using namespace std;

int main()
{
	string filename = "record.dat";  front
	ofstream outFile;
	ifstream inFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());


	if (outFile.fail())
	{
		std::cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	
	const int value = 5;
	int record;
	std::cout << "Enter an Account Number" << endl;
	
	std::cin >> record;
	inFile >> record;

	switch (record){
	case 1000:
		outFile << "Patrick"<< endl;
		outFile << "Hentz" << endl;
		outFile << 10533.34 << endl;
		break;
		
	case 1001:
		outFile << " John " << endl;
		outFile << " Doe " << endl;
		outFile << 12032.29 << endl;
		break;
		
	case 1002:
		outFile << " John " << endl;
		outFile << " Bow " << endl;
		outFile << 12132.29 << endl;
		break;
		
	case 1003:
		outFile << " John " << endl;
		outFile << " Mo " << endl;
		outFile << 12232.29 << endl;
		break;
		
	case 1004:
		outFile << " John " << endl;
		outFile << " Grow " << endl;
		outFile << 12332.29 << endl;
		break;
	}


	inFile.close();
	outFile.close();
	
	std::cout << "The file " << filename
		<< " has been successfully written." << endl;
		
	_getch();
	return 0;
}

Question 9 – [Part 3  Question 2]


	for (offset = 0L; offset <= last; offset++)
	{
		inFile.seekg(offset, ios::beg);
		ch = inFile.get();
		cout << ch << " : ";
	}
	
	inFile.close();
	cout << endl;


Question 10 – [Part 3  Question 4 ]

#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"
#include "cstdlib"

using namespace std;

int main()
{
	string filename = "test.dat";
	char ch;
	long offset, last;
	ifstream inFile(filename.c_str());
	
	
	if (inFile.fail())   
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists"
			<< endl;
			
		exit(1);
	}
	
	
	inFile.seekg(0L, ios::end);   // move to the end of the file
	last = inFile.tellg();      
	
	for (offset = 0L; offset <= last - 1; offset++)
	{
		if (offset % 2 == 0){
		inFile.seekg(offset, ios::beg);
		ch = inFile.get();
		cout << ch << " ";
	   }
	   
	}
	

	inFile.close();
	cout << endl;
	
	
	_getch();
	return 0;
}