//---------------------------------------------------------------------------
#pragma hdrstop

#include "Unit2.h"
#include "math.h"

//---------------------------------------------------------------------------
void f(int n, double t, double x[], double z[], double M, double m, double L, double l, double Ip, double g, double Rm, double Lm, double Km, double r, double Kg, double k[], double ampl, double Bx, double Bf)
{
 double B,D,temp1,temp2;
 double V,w1,w2;
 w1=ampl*sin(3*t)/50;
 w2=ampl*cos(sin(5*t))/50;
 V=x[0]*k[0]+x[1]*k[1]+x[2]*k[2]+x[3]*k[3];
 B=Kg*Km/r;
 D=m*m*l*l*sin(x[2])*sin(x[2])+m*M*l*l+(M+m)*Ip;
 temp1=((B/Rm)*V-B*B/Rm*x[1]-m*l*sin(x[2])*x[3]*x[3]-Bx*x[1]-w1);
 temp2=m*g*l*sin(x[2])-Bf*x[3]-w2;
/* x - ?????? ???????? ??????? ???????
   z - ?????? ???????? ??????????? */
 z[0]=x[1];
 z[1]=(1/D)*((m*l*l+Ip)*temp1+m*l*cos(x[2])*temp2);
 z[2]=x[3];
 z[3]=(1/D)*((m*l*cos(x[2]))*temp1+(M+m)*temp2);
}

void Eyler(double a, double b, double h, int n, double x[],  double M, double m, double L, double l, double Ip, double g, double Rm, double Lm, double Km, double r, double Kg, double k[], double ampl, double Bx, double Bf)
{/* ????? ?????? ???????????? */
 double t, t1, z[N], x2[N], fi1[N];
 t=a;
 while(t+h<=b) {
  f(n, t, x, z,M,m,L,l,Ip,g,Rm,Lm,Km,r,Kg,k,ampl,Bx,Bf);
  t1 = t+h;
  for(int i=0; i<n; i++) x2[i]=x[i]+h*z[i];
  f(n, t1, x2, fi1,M,m,L,l,Ip,g,Rm,Lm,Km,r,Kg,k,ampl,Bx,Bf);
  for(int i=0; i<n; i++) x[i]=x[i]+(fi1[i]+z[i])*(h/2);
  t=t+h;
 }
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
 