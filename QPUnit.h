//---------------------------------------------------------------------------

#ifndef QPUnitH
#define QPUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTabSheet *tbsQuestion1_5;
	TButton *btnQ1_2;
	TButton *btnQ1_3;
    TButton *btnQ1_4;
    TRichEdit *redQ1_3;
	TRichEdit *redQ1_4;
	TPageControl *pgcQ1;
	TPanel *pnlQ1_1;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *edtHeight;
	TEdit *edtRadius;
	TLabel *Label5;
	TLabel *Label6;
    TBitBtn *bmbClose;
	TImage *imgCylinder;
	TComboBox *cmbQ1_5;
	TButton *btnQ1_5_1;
	TButton *btnQ1_5_2;
	TLabel *Label1;
	TRichEdit *redQ1_5;
	void __fastcall pnlQ1_1Click(TObject *Sender);
	void __fastcall tbsQuestion1_2Show(TObject *Sender);
	void __fastcall btnQ1_2Click(TObject *Sender);
	void __fastcall btnQ1_3Click(TObject *Sender);
	void __fastcall btnQ1_4Click(TObject *Sender);
	void __fastcall btnQ1_5_1Click(TObject *Sender);
	void __fastcall btnQ1_5_2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
