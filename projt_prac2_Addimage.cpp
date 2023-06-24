//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projt_prac2_Addimage.h"
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
	if(OpenDialog1 -> Execute())
	{
		Image -> Bitmap -> Loadfromfile(OpenDialog1 -> FileName);
		Image -> BestFit();
	}
}
//---------------------------------------------------------------------------
