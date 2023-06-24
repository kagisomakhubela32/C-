//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "randomUnit1.h"
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
void __fastcall TForm1::ranBtnClick(TObject *Sender)
{
	double ranNum = Random(120);
	double randEdit = StrToFloat(edtRandomNumber -> Text);
	randEdit = ranNum;
	//edtRandomNumber -> Caption = ranNum;
}
//---------------------------------------------------------------------------
