//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:
        TMainMenu *MainMenu1;
        TMenuItem *Dosya1;
        TMenuItem *Dzen1;
        TMenuItem *Biim1;
        TMenuItem *Yardm1;
        TMenuItem *YeniCtrlN1;
        TMenuItem *ACtrlO1;
        TMenuItem *KaydetCtrlS1;
        TMenuItem *FarklKaydet1;
        TMenuItem *N1;
        TMenuItem *YazdrCtrlP1;
        TMenuItem *N2;
        TMenuItem *k1;
        TMenuItem *GeriAlCtrlZ1;
        TMenuItem *N3;
        TMenuItem *KesCtrlX1;
        TMenuItem *KopyalaCtrlC1;
        TMenuItem *YaptrCtrlV1;
        TMenuItem *SilDel1;
        TMenuItem *N4;
        TMenuItem *GitCtrlH1;
        TMenuItem *N5;
        TMenuItem *TmnSeCtrlA1;
        TMenuItem *TarihSaat1;
        TMenuItem *YazTipi1;
        TMenuItem *DefterHakknda1;
        TMenuItem *RenkSeimi1;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        TColorDialog *ColorDialog1;
        TPrintDialog *PrintDialog1;
        TScrollBox *ScrollBox1;
        TRichEdit *RichEdit1;
        void __fastcall YeniCtrlN1Click(TObject *Sender);
        void __fastcall KaydetCtrlS1Click(TObject *Sender);
        void __fastcall ACtrlO1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FarklKaydet1Click(TObject *Sender);
        void __fastcall YazdrCtrlP1Click(TObject *Sender);
        void __fastcall k1Click(TObject *Sender);
        void __fastcall TmnSeCtrlA1Click(TObject *Sender);
        void __fastcall TarihSaat1Click(TObject *Sender);
        void __fastcall KesCtrlX1Click(TObject *Sender);
        void __fastcall KopyalaCtrlC1Click(TObject *Sender);
        void __fastcall YaptrCtrlV1Click(TObject *Sender);
        void __fastcall SilDel1Click(TObject *Sender);
        void __fastcall RenkSeimi1Click(TObject *Sender);
        void __fastcall YazTipi1Click(TObject *Sender);
        void __fastcall GitCtrlH1Click(TObject *Sender);
        void __fastcall DefterHakknda1Click(TObject *Sender);
private:
public:	
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
