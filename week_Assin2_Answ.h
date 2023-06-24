Week Assignment 2

Question 1 

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "conio.h"
#include "string"
#include "fstream"

using namespace std;

int main()
{
	char memo[50];
	string answer;
	int count = 0;
	int studID;
	string studName;
	
	ofstream outFile("booklet.dat");
	ofstream outFile2("answer.dat");
	
	outFile << "ACBAADDBCBDDAACDBACCABDCABCCBDDABCACABABABCBDBAABD" << endl;
	
	outFile.close();

	do
	{
		cout << "enter student ID: (enter "0000") to terminate " << endl;
		getline(cin,studID);
		cout << "enter student name" << endl;
		getline(cin,studName);
		cout << "enter student Answers" << endl;
		getline(cin,answer);
		
		outFile2 << studID << endl;
		outFile2 << studName << endl;
		outFile2 << answer << endl;
		
		ofstream outFile3("report.dat");
	
		while (getline(inFile2, answer))
		{
		
			for (int i = 0; i < 50; i++)
			{
				inFile >> memo[i];
				if (answer[i] == memo[i])
				{
					count = count + 1;
				}
			}
			for (int i = 51; answer[i] != '*'; i++)
			{
				outFile3 << answer[i];
			}
			outFile3 << studID << " " << studName<< " " << count << endl;
		}
		
		
	}while(studID != 0000);
	
	outFile2.close();
	outFile3.close();
	inFile.close();
	inFile2.close();
	
	_getch();
	return 0;
}


question 2

#include "iostream"
#include "iomanip"
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	ofstream outFile("arrest.dat");
	
	outFile << "The police is looking for Robert Whiteshead, also known as Whity, ID number 4607091111027, from " << endl;
	outFile << "address 4 Azalea Court, 219 Belmont Street, Germiston, 2065, in connection with a bank robbery at" << endl;
	outFile << "UNITED BANK in January 2016. An amount of about R45, 000, 000 was stolen on this day.Apparently " << endl;
	outFile << "he had a helper that goes by the name of JOINT13.Mr Whiteshead was also an accomplice in a car " << endl;
	outFile << "syndicate in 2015 in Somerset - West.If anybody can supply any information that could lead to his" << endl;
	outFile << "arrest, please contact Sgt SURPRISE MOLOI at the Germiston police station on 011 - 2336767 or 011 -" << endl;
	outFile<< "2336788." << endl;
	
	outFile.close();
	ifstream inFile("arrest.dat");
	if (inFile.fail())
	{
		cout << "Error occured in opening the file for reading : " << endl;
	}
	string change;
	while (getline(inFile, change))
	{
		for (int i = 0; change[i] != '\0'; i++)
		{
			
			switch (change[i])
			{
			case '0':
				change[i] = '@';
			case '1':
				change[i] = '!';
			case '2':
				change[i] = ')';
			case '3':
				change[i] = 'E';
			case '4':
				change[i] = '<';
			case '5':
				change[i] = '&';
			case '6':
				change[i] = '$';
			case '7':
				change[i] = '>';
			case '8':
				change[i] = '*';
			case '9':
				change[i] = '?';
			case 'e':
				change[i] = 'h';
			}
			if (isspace(change[i]))
			{
				change[i] = '-';
			}
			if (isupper(change[i]))
			{
				change[i] = '%';
			}
			cout << change[i];
		}
	}
	_getch();
	return 0;
}
