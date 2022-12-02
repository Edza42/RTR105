#include<stdio.h>
#include<math.h>
double mana_funkcija(double x){
 double a,S;
 int k=0;

 a = 1.;
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<10){
  k++;
  a = a * (-1) *x / k;
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
  }
 return (1-x)*S;
}

void main(){
 double x=2.05,y,yy;
 y =(1-x)*exp(-x);
 printf("funkcija (1-x)*exp(-x) - y=(1-%.2f)*exp(%.2f)=%.2f\n",x,x,y);

 yy = mana_funkcija(x);
 printf("funkcijas Teilora rinda - s(%.2f)=%.2f\n",x,y);

//return 0;
}
