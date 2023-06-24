//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mainUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	double ranNum = 100 + Random(20);
	edtRandomNumber -> Text = ranNum;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	edtRandomNumber -> Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::calBtnClick(TObject *Sender)
{
	double numPartpent = StrToFloat(edtParticipants -> Text);
	double totalMint = 0.00;
	double totalRoundMint = 0;

	if(numPartpent <= 20)
	{
		totalMint = numPartpent * 2.5;
	}
	else if(numPartpent <= 50)
	{
		totalMint = numPartpent * 2.3;
	}
	else
	{
		totalMint = numPartpent * 2.0;
	}

	totalRoundMint = totalMint;

	edtMinutes -> Text = totalMint;
	edtMinsRounded -> Text = round(totalRoundMint);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int spnNum = spnNumber -> Value;
	int factovlu = 0;
	int fuctoMax = 1;

	if(spnNum > 0)
	{
		for(int i = 1;i <= spnNum;i++)
		{
			fuctoMax = fuctoMax * i;
		}

		factovlu = fuctoMax;
	}
	else
	{
		 edtFactorial -> Text = "invalid value";
	}

	edtFactorial -> Text = factovlu;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	AnsiString sentEdit;
	sentEdit = edtSentence -> Text;
	AnsiString rvsentEdit;
	int const SIZE = sentEdit.Length();
	String sentEditArry[] = sentEdit;
	String rvsentEditArry[SIZE];

	for(int i = sentEdit.Length();i >= 0;i--)
	{
		rvsentEditArry[i] = sentEditArry[i];
		edtReverse -> Text = rvsentEditArry[i];
	}
	//edtReverse -> Text = rvsentEdit;
}
//---------------------------------------------------------------------------

