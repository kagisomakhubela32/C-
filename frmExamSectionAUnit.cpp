//---------------------------------------------------------------------------

#include <vcl.h>
#include <JPEG.hpp>
#pragma hdrstop

#include "frmExamSectionAUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma resource "*.dfm"
TfrmExamPartA *frmExamPartA;

char Code;

//---------------------------------------------------------------------------
// GetFieldByNr
// Question 2.2
AnsiString getFieldByNr(AnsiString aLine, int fieldNr, char delimiter)
{  // (6)

}
//---------------------------------------------------------------------------
AnsiString replaceDelimiter(AnsiString aLine, char oldDel, char newDel)
{ // Question 2.2
	// (4)
	AnsiString *lstRawData;
	AnsiString *redOutput;
	aLine = redOutput -> Lines -> Strings[lstRawData -> LinesIndex];

	for(int i = 0;i < aLine.Length();i++)
	{
		if(aLine[i] == oldDel)
		{
			aLine[i] = newDel;
		}
	}

  return aLine;
}
//---------------------------------------------------------------------------
void __fastcall TfrmExamPartA::tbsQuestion2Show(TObject *Sender)
{   // Question 2.1
   ApplySettings(this);   // GIVEN
   {
	  lstRawData -> LoadFromFile("..//..//AppData//HistoricSightings2000_Pipe.txt");
   }

}
//---------------------------------------------------------------------------
void __fastcall TfrmExamPartA::btnLoadClick(TObject *Sender)
{ // Question 2.3
	// (6)
	char oldDel = '|';
	char newDel = '\t';
	AnsiString aLine;
	ApplySettings(this);
	redOutput -> Lines -> AddStrings(lstRawData);
	replaceDelimiter(aLine, oldDel, newDel);
	redOutput -> Lines -> Add(aLine);

}
//---------------------------------------------------------------------------
void __fastcall TfrmExamPartA::ckbAnimalKeywordClick(TObject *Sender)
{  // Question 2.4 (12)
   if(cmbKeywordFilter -> Itemindex == 0)
   {
	  btnLoadClick(this);
   }
   else
   {
	  for(int i = 0;i < lstRawData -> Count;i++)
	  {
		OneListLine = lstRawData -> Strings[i];
		redOutput -> Lines ->Add(OneListLine);
	  }
   }
}
//---------------------------------------------------------------------------

void __fastcall TfrmExamPartA::tbsQuestion1Show(TObject *Sender)
{
   // Question 1.1
   // Display and appearance settings
   // (5) Marks for all settings -1 for each incorrect or omitted setting
   rdgCamps -> Caption = "Camps of KNP";
   pnlCampCode -> Font -> Size = 26;
   pnlCampCode -> Font -> Color = clCream;
   pnlCampCode -> ParentColor = false;
   pnlCampCode -> ParentBackground = false;
   pnlCampCode -> Color = clOlive;
   pnlCampCode -> Font -> Name = "consolas";


   // Question 1.2
   // Dynamic bitmapbutton (5)
   TButton *bttClose = new TButton(this);
   bttClose -> Parent = tbsQuestionl;
   bttClose -> Left = 700;
   bttClose -> Top = 400;
   bttClose -> Kind = bkClose;

}
//---------------------------------------------------------------------------

void __fastcall TfrmExamPartA::rdgCampsClick(TObject *Sender)
{  // Question 1.3
   // (11)
   AnsiString curntLine;
   AnsiString campName;
   int indx = rdgCamps -> ItemsIndx;
   int countVows = 0;
   int countCons = 0;

   campName = rdgCamps -> Items -> AddStrings[indx];

   for (int i = 0; i <= campName.Length() = 'a')
   {


		if(campName[i] == 'a' || campName[i] == 'A')
		{
			countVows++;
		}
		else if(campName[i] == 'e' || campName[i] == 'E')
		{
			countVows++;
		}
		else if(campName[i] == 'i' || campName[i] == 'I')
		{
			countVows++;
		}
		else if(campName[i] == 'o' || campName[i] == 'O')
		{
			countVows++;
		}
		else if(campName[i] == 'u' || campName[i] == 'U')
		{
			countVows++;
		}
		else
			countCons++;

   }

   curntLine = campName.SubStr(1,3);
   pnlCampCode -> Caption = curntLine + countVows + " = " + countCons;
}
//---------------------------------------------------------------------------


void __fastcall TfrmExamPartA::tbsQuestion3Show(TObject *Sender)
{ // Given Code


}
//---------------------------------------------------------------------------

void TfrmExamPartA::ApplySettings(TObject *Sender)
{
   // Given code
   redOutput->Lines->Clear();
   redOutput->Paragraph->TabCount = 6;
   redOutput->Paragraph->Tab[1] = 50;
   redOutput->Paragraph->Tab[2] = 100;
   redOutput->Paragraph->Tab[3] = 220;
   redOutput->Paragraph->Tab[4] = 270;
   redOutput->Paragraph->Tab[5] = 400;
   redOutput->Paragraph->Tab[6] = 520;
}
//---------------------------------------------------------------------------
void __fastcall TfrmExamPartA::FormShow(TObject *Sender)
{
 // Given code do not delete

	ScrollMessage = " All for the love of the Best Place on Earth! ";

	FormatSettings.DecimalSeparator = '.';
	FormatSettings.ShortDateFormat = "yyyy/mm/dd";
	FormatSettings.DateSeparator = '/';
	FormatSettings.TimeSeparator = ':';

   pgctrlMain->ActivePageIndex = 0;

   tbsQuestion1Show(this);
}
//---------------------------------------------------------------------------
__fastcall TfrmExamPartA::TfrmExamPartA(TComponent* Owner)
	: TForm(Owner)
{
   //GIVEN
   lstRawData = new TStringList;

}
//---------------------------------------------------------------------------










