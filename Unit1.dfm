object Form1: TForm1
  Left = 692
  Top = 121
  AutoScroll = False
  Caption = 'Not Defteri V0.1'
  ClientHeight = 431
  ClientWidth = 658
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ScrollBox1: TScrollBox
    Left = 0
    Top = 0
    Width = 658
    Height = 431
    Align = alClient
    ParentShowHint = False
    ShowHint = False
    TabOrder = 0
    object RichEdit1: TRichEdit
      Left = 0
      Top = 0
      Width = 654
      Height = 427
      Align = alClient
      BorderStyle = bsNone
      TabOrder = 0
    end
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object Dosya1: TMenuItem
      Caption = 'Dosya   '
      object YeniCtrlN1: TMenuItem
        Caption = 'Yeni'
        ShortCut = 16462
        OnClick = YeniCtrlN1Click
      end
      object ACtrlO1: TMenuItem
        Caption = 'A�...'
        ShortCut = 16463
        OnClick = ACtrlO1Click
      end
      object KaydetCtrlS1: TMenuItem
        Caption = 'Kaydet'
        ShortCut = 16467
        OnClick = KaydetCtrlS1Click
      end
      object FarklKaydet1: TMenuItem
        Caption = 'Farkl� Kaydet...'
        OnClick = FarklKaydet1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object YazdrCtrlP1: TMenuItem
        Caption = 'Yazd�r... '
        ShortCut = 16464
        OnClick = YazdrCtrlP1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object k1: TMenuItem
        Caption = '��k��'
        OnClick = k1Click
      end
    end
    object Dzen1: TMenuItem
      Caption = 'D�zen    '
      object GeriAlCtrlZ1: TMenuItem
        Caption = 'Geri Al'
        ShortCut = 16474
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object KesCtrlX1: TMenuItem
        Caption = 'Kes'
        ShortCut = 16472
        OnClick = KesCtrlX1Click
      end
      object KopyalaCtrlC1: TMenuItem
        Caption = 'Kopyala'
        ShortCut = 16451
        OnClick = KopyalaCtrlC1Click
      end
      object YaptrCtrlV1: TMenuItem
        Caption = 'Yap��t�r'
        Enabled = False
        ShortCut = 16470
        OnClick = YaptrCtrlV1Click
      end
      object SilDel1: TMenuItem
        Caption = 'Sil'
        ShortCut = 46
        OnClick = SilDel1Click
      end
      object N4: TMenuItem
        Caption = '-'
      end
      object GitCtrlH1: TMenuItem
        Caption = 'Git...'
        ShortCut = 16455
        OnClick = GitCtrlH1Click
      end
      object N5: TMenuItem
        Caption = '-'
      end
      object TmnSeCtrlA1: TMenuItem
        Caption = 'T�m�n� Se�'
        ShortCut = 16449
        OnClick = TmnSeCtrlA1Click
      end
      object TarihSaat1: TMenuItem
        Caption = 'Tarih / Saat'
        ShortCut = 116
        OnClick = TarihSaat1Click
      end
    end
    object Biim1: TMenuItem
      Caption = 'Bi�im   '
      object YazTipi1: TMenuItem
        Caption = 'Yaz� Tipi'
        OnClick = YazTipi1Click
      end
      object RenkSeimi1: TMenuItem
        Caption = 'Renk Se�imi'
        OnClick = RenkSeimi1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 40
    Top = 8
  end
  object SaveDialog1: TSaveDialog
    Left = 72
    Top = 8
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 104
    Top = 8
  end
  object ColorDialog1: TColorDialog
    Ctl3D = True
    Left = 136
    Top = 8
  end
  object PrintDialog1: TPrintDialog
    Left = 168
    Top = 8
  end
end
