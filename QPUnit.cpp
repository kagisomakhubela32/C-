//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "QPUnit.h"
#include "jpeg.hpp"
#include <math.h>
#include <fstream.h>


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//For question 1.5
const int iRowCount = 16;
AnsiString arrMaze[16];

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pnlQ1_1Click(TObject *Sender)
{
 // Question 1.1
	pnlQ1_1 -> Caption = "we LOVE C++ Builder and TPG2";
	pnlQ1_1 -> Font -> Size = 20;
	pnlQ1_1 -> Font -> Color = clRed;
	pnlQ1_1 -> Color = clLime;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::btnQ1_2Click(TObject *Sender)
{
// Question 1.2
	double height = StrToFloat(edtHeight -> Text);
	double radius = StrToFloat(edtRadius -> Text);
	double volume;

	volume = M_PI * pow(radius,2) * (height - 1);
	ShowMessage("The volume is = " + FloatToStr(volume));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnQ1_3Click(TObject *Sender)
{
// Question 1.3

	redQ1_3 -> Lines -> Clear();
	int randomNum;
	int factor;
	int temp;
	AnsiString primText;

	randomNum = 5 + random(46);

	for(int i = randomNum;i >= 1;i--)
	{

		if(randomNum % i == 0)
		{
		   factor = randomNum / i;
		   primText = IntToStr(factor);
		   redQ1_3 -> Lines -> Add(primText);
		}
		else if(factor == 1 && factor == randomNum && randomNum % i > 0 )
		{
			primText = IntToStr(randomNum) + " is a prime number";
		}

	}
	redQ1_3 -> Lines -> Add(primText);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnQ1_4Click(TObject *Sender)
{
// Question 1.4
	String instructions;
	int const SIZE = 10;
	AnsiString inFull;
	instructions = InputBox("Robot instructions","Add Content","");

	for(int i = 0;i < instructions.Length();i++)
	{
		if(instructions.Length() <= SIZE)
		{
			if(instructions[i] == 's')
			{
				inFull = " One step forward ";
			}
			else if(instructions[i] == 'l')
			{
				inFull = " Turn left ";
			}
			else
				inFull = " Turn right ";
		}

	   redQ1_4 -> Lines -> Add(inFull);
	}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnQ1_5_1Click(TObject *Sender)
{ // Question 1.5.1

	int const RSIZE = 15;
	String maxeArry[RSIZE];
	cmbQ1_5 -> Text -> Clear();
	AnsiString mazeTyp = cmbQ1_5 -> Text;
	AnsiString mssgNOFound = "sorry text file not found";
	int i = 0;
	TStringList line;

	if(mazeTyp ==  "Maze 1")
	{
	   String mazeFile1 = "AppData\\Maze 1.txt";
	   ifstream inMazeFile. open(mazeFile1);
	}
	else if(mazeTyp ==  "Maze 2")
	{
		String mazeFile2 = "AppData\\Maze 2.txt";
		ifstream inMazeFile. open(mazeFile2);
	}
	else if(mazeTyp ==  "Maze 3")
	{
		String mazeFile3 = "AppData\\Maze 3.txt";
		ifstream inMazeFile. open(mazeFile3);
	}
	else
		redQ1_5 -> Lines -> Add(mssgNOFound);

	line = LoaddFformFile(inMazeFile)

	do
	{
		maxeArry[i] = line;
		redQ1_5 -> Lines -> Add(i + " " + line);

		i++;

	}while(inMazeFile != '\0')

}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnQ1_5_2Click(TObject *Sender)
{ // Question 1.5.2

	int const CSIZE = 17;
	int const RSIZE = 15;
	int count1 = 0, count2 = 0,highst = 0,indx;
	char maxeArry[RSIZE][CSIZE];
	AnsiString mazeTyp2 = cmbQ1_5;
	AnsiString mssgFound;

	maxeArry[RSIZE][CSIZE] = mazeTyp2;

	for(int r = 0;r <= RSIZE;r++)
	{
		for(int c = 0;c <= CSIZE;c++)
		{
			if(maxeArry[r][c] == '-')
			{
				count1++;
			}
			if(count1 >= highst)
			{
				highst = count1;
				indx = r;
			}

		}
	}
	mssgFound = "The longest corridor(s) whith " + highst + "spaces in row(s): " + indx;
	redQ1_5 -> Lines -> Add(mssgFound);

}
//---------------------------------------------------------------------------



