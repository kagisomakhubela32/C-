//---------------------------------------------------------------------------

#ifndef mainUnit1H
#define mainUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TEdit *edtRandomNumber;
	TLabel *Label1;
	TPanel *Panel2;
	TLabel *Label2;
	TButton *calBtn;
	TEdit *edtParticipants;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *edtMinutes;
	TEdit *edtMinsRounded;
	TPanel *Panel3;
	TSpinEdit *spnNumber;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button2;
	TEdit *edtFactorial;
	TPanel *Panel4;
	TLabel *Label7;
	TLabel *Label8;
	TEdit *edtSentence;
	TButton *Button3;
	TEdit *edtReverse;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall calBtnClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
