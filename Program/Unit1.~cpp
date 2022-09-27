//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double x[N], z[N], k1[N];
double a,b,h,t,tp,tmax,hp;
double M,m,L,l,Ip,g,Ri,Lm,Km,r,Kg, ampl, Bx, Bf;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
//Обработчик событий кнопки "Таблица значений"
{
 /* Таблица значений */
 StringGrid1->Visible = true;
 StringGrid1->Cells[0][0] = "t";
 StringGrid1->Cells[1][0] = "X1(t)";
 StringGrid1->Cells[2][0] = "X2(t)";
 StringGrid1->Cells[3][0] = "X3(t)";
 StringGrid1->Cells[4][0] = "X4(t)";

 /* Начальное и конечное время */
 a = StrToFloat(Edit3->Text);
 b = StrToFloat(Edit4->Text);

 /* Шаг интегрирования и шаг печати */
 h = StrToFloat(Edit5->Text);
 hp = StrToFloat(Edit6->Text);

 /* Начальные значения */
 M = StrToFloat(Edit7->Text);
 m = StrToFloat(Edit8->Text);
 L = StrToFloat(Edit9->Text);
 l = StrToFloat(Edit10->Text);
 Ip = StrToFloat(Edit11->Text);
 g = StrToFloat(Edit12->Text);
 Ri = StrToFloat(Edit13->Text);
 Lm = StrToFloat(Edit14->Text);
 Km = StrToFloat(Edit15->Text);
 r = StrToFloat(Edit16->Text);
 Kg = StrToFloat(Edit17->Text);
 x[0] = StrToFloat(Edit1->Text);
 x[1] = StrToFloat(Edit2->Text);
 x[2] = StrToFloat(Edit18->Text);
 x[3] = StrToFloat(Edit19->Text);
 k1[0] = StrToFloat(Edit20->Text);
 k1[1] = StrToFloat(Edit21->Text);
 k1[2] = StrToFloat(Edit22->Text);
 k1[3] = StrToFloat(Edit23->Text);
 ampl = StrToFloat(Edit24->Text);
 Bx = StrToFloat(Edit25->Text);
 Bf = StrToFloat(Edit26->Text);

 f(N, a, x, z, M,m,L,l,Ip,g,Ri,Lm,Km,r,Kg,k1,ampl,Bx,Bf);
 StringGrid1->Cells[0][1] = FloatToStr(a);

 int k=1;
 for(int i=0; i<N; i++)
    StringGrid1->Cells[i+1][k] = FloatToStr(x[i]);
 t=a;
 tp = t+hp;
 tmax = b+(h/2);
 while(tp<=tmax) {
  k=k+1;
  Eyler(t, tp, h, N, x,M,m,L,l,Ip,g,Ri,Lm,Km,r,Kg,k1,ampl,Bx,Bf);
    StringGrid1->Cells[0][k] = FloatToStr(tp);
  for(int i=0; i<N; i++)
    StringGrid1->Cells[i+1][k] = FloatToStr(x[i]);
 t = tp;
 tp = tp+hp;
 }
    StringGrid1->RowCount = k+1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
//Обработчик событий кнопки "График"
{
/* Метод для построение графика найденных функций */
 int i,n;
 double t, x1, x2, x3, x4;

 Chart1->Visible=true;
 Series1->Clear();
 Series2->Clear();
 Series3->Clear();
 Series4->Clear();
 n = StringGrid1->RowCount-1;
 for(i=0; i<n; i++) {
  t = StrToFloat(StringGrid1->Cells[0][i+1]);
  x1 = StrToFloat(StringGrid1->Cells[1][i+1]);
  x2 = StrToFloat(StringGrid1->Cells[2][i+1]);
  x3 = StrToFloat(StringGrid1->Cells[3][i+1]);
  x4 = StrToFloat(StringGrid1->Cells[4][i+1]);
  Series1->AddXY(t, x1, "", clRed);
  Series2->AddXY(t, x2, "", clNavy);
  Series3->AddXY(t, x3, "");
  Series4->AddXY(t, x4, "");
 }
}
//---------------------------------------------------------------------------
