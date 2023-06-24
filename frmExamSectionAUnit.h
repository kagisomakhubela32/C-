//---------------------------------------------------------------------------

#ifndef frmExamSectionAUnitH
#define frmExamSectionAUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Graphics.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmExamPartA : public TForm
{
__published:	// IDE-managed Components
	TPanel *pnlRight;
	TPageControl *pgctrlMain;
	TTabSheet *tbsQuestion1;
	TImage *Image1;
	TTabSheet *tbsQuestion2;
	TComboBox *cmbKeywordFilter;
	TButton *btnLoad;
	TLabel *lblRecords;
	TRichEdit *redOutput;
	TCheckBox *ckbAnimalKeyword;
	TRadioGroup *rdgCamps;
	TPanel *pnlCampCode;
	TImage *imgCamp;
	TTabSheet *tbsQuestion3;
	TLabel *Label1;
	TStatusBar *StatusBar;

	void __fastcall tbsQuestion2Show(TObject *Sender);
	void __fastcall btnLoadClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ckbAnimalKeywordClick(TObject *Sender);
	void __fastcall tbsQuestion1Show(TObject *Sender);
	void __fastcall rdgCampsClick(TObject *Sender);
	void __fastcall tbsQuestion3Show(TObject *Sender);





private:	// User declarations
	TStringList *lstRawData;
	AnsiString OneListLine;
	bool validateFlag;
	int iRangerID;
	AnsiString ScrollMessage;


public:		// User declarations
	__fastcall TfrmExamPartA(TComponent* Owner);

	void ApplySettings(TObject *Sender);
	AnsiString replaceDelimiter(AnsiString aLine, char oldDel, char newDel);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmExamPartA *frmExamPartA;
//---------------------------------------------------------------------------
#endif
