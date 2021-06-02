//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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

void __fastcall TForm1::YeniCtrlN1Click(TObject *Sender)
{
if(RichEdit1->Modified)
{
int a=Application->MessageBox("Deðiþiklik Var Kayýt Etmek Ýster misiniz?", "Uyarý",MB_ICONINFORMATION+MB_YESNOCANCEL);
  switch(a)
  {
     case IDYES: KaydetCtrlS1->Click(); RichEdit1->Lines->Clear(); Caption="Not Defteri V0.1"; break;
     case IDNO:  RichEdit1->Lines->Clear(); Caption="Not Defteri V0.1"; break;
     case IDCANCEL: break;
  }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::KaydetCtrlS1Click(TObject *Sender)
{   if(RichEdit1->Modified)
{
if(Caption=="Not Defteri V0.1")
{
FarklKaydet1->Click();

}
else
{
   RichEdit1->Lines->SaveToFile(Caption);
}}
else
Application->MessageBox("Dosyanýzda Bir Deðiþiklik Olmamýþtýr","Uyarý",MB_ICONINFORMATION) ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ACtrlO1Click(TObject *Sender)
{
if(RichEdit1->Modified)

        YeniCtrlN1->Click();
  if(OpenDialog1->Execute())
     {
       RichEdit1->Lines->LoadFromFile(OpenDialog1->FileName);
       Caption=OpenDialog1->FileName;
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{

int yer=0,adet=0;
RichEdit1->HideSelection=false;
SaveDialog1->DefaultExt="htr";
 OpenDialog1->DefaultExt="htr";
OpenDialog1->Filter="Not Dosyalarý (*.not) |*.not| Bütün Dosyalar (*.*) |*.*";
 SaveDialog1->Filter="Not Dosyalarý (*.not) |*.not| Bütün Dosyalar (*.*) |*.*";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FarklKaydet1Click(TObject *Sender)
{
if(SaveDialog1->Execute())
  {
  RichEdit1->Lines->SaveToFile(SaveDialog1->FileName);
  Caption=SaveDialog1->FileName;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::YazdrCtrlP1Click(TObject *Sender)
{
PrintDialog1->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::k1Click(TObject *Sender)
{
if(RichEdit1->Lines->Count>0)
{
       YeniCtrlN1->Click();
       Form1->Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TmnSeCtrlA1Click(TObject *Sender)
{
RichEdit1->SelectAll();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TarihSaat1Click(TObject *Sender)
{
RichEdit1->Text=TimeToStr(Time()) +"   "+ DateToStr(Date());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::KesCtrlX1Click(TObject *Sender)
{
RichEdit1->CutToClipboard();
YaptrCtrlV1->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::KopyalaCtrlC1Click(TObject *Sender)
{
RichEdit1->CopyToClipboard();
YaptrCtrlV1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::YaptrCtrlV1Click(TObject *Sender)
{
RichEdit1->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SilDel1Click(TObject *Sender)
{
RichEdit1->ClearSelection();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RenkSeimi1Click(TObject *Sender)
{    if(ColorDialog1->Execute())
RichEdit1->Font->Color=ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::YazTipi1Click(TObject *Sender)
{
if(FontDialog1->Execute())
  RichEdit1->Font=FontDialog1->Font;        
}
//---------------------------------------------------------------------------















void __fastcall TForm1::GitCtrlH1Click(TObject *Sender)
{
int a=StrToInt(InputBox("Satýr Giriþi","Gidilecek Satýrý Yazýnýz",""));
RichEdit1->Lines->Insert(a,"");
RichEdit1->Lines->Delete(a);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DefterHakknda1Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------

