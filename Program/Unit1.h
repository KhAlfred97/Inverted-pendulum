/*
Проект на тему: "Маятник на тележке"

Задание: решить систему ОДУ:
d^2(x1)/dt^2=-(1/D)*((m*l*l+Ip)*temp1+m*l*cos(x[2])*temp2)
d^2(x3)/dt^2=-(1/D)*((m*l*cos(x[2]))*temp1+(M+m)*temp2)
где temp1=(B/Rm)*V-B*B/Rm*x[1]-m*l*sin(x[2])*x[3]*x[3]-Bx*x[1]-w1
    temp2=m*g*l*sin(x[2])-Bf*x[3]-w2
    t[a,b], x=(x1,x2,x3,x4)^T
Пусть задано начальное условие: x1(0)=0, x2(0)=0, x3(0)=1.127, x4(0)=0
                                k1=0, k2=0, k3=0, k4=0
Пределы изменения аргумента: a=0, b=15
Требуется: найти приближенное решение заданных дифференциальных уравнений
Использовать численный метод решения: Эйлера исправленный

Выполнил: Хафизов А.И., группа 3339
*/
//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Series.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TButton *Button1;
        TButton *Button2;
        TStringGrid *StringGrid1;
        TChart *Chart1;
        TLineSeries *Series1;
        TLineSeries *Series2;
        TLabel *Label9;
        TLabel *Label10;
        TEdit *Edit7;
        TEdit *Edit8;
        TLabel *Label11;
        TLabel *Label12;
        TEdit *Edit9;
        TEdit *Edit10;
        TLabel *Label13;
        TLabel *Label14;
        TEdit *Edit11;
        TEdit *Edit12;
        TLabel *Label15;
        TLabel *Label16;
        TEdit *Edit13;
        TEdit *Edit14;
        TLabel *Label17;
        TLabel *Label18;
        TEdit *Edit15;
        TEdit *Edit16;
        TLabel *Label19;
        TEdit *Edit17;
        TLabel *Label20;
        TLabel *Label21;
        TEdit *Edit18;
        TEdit *Edit19;
        TLineSeries *Series3;
        TLineSeries *Series4;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TEdit *Edit20;
        TEdit *Edit21;
        TEdit *Edit22;
        TEdit *Edit23;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TEdit *Edit24;
        TEdit *Edit25;
        TEdit *Edit26;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
