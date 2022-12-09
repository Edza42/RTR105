#include<stdio.h>
#include<math.h>

float modified_exp(float x, float A){
 return (1-x)*exp(-x);}

void main(){
 float a,x,delta_x,b,y,A;
 a = 0;
 b = 2*M_PI;

 print("Cien. liet., lūdzu, ievadi A vērtību sekojošam vienādojumam:
    (1-x)*exp(-x)");
 scanf("%f",&A);
 x = a;
 delta_x = 0.1;
 printf("\tx\ty\n");
 while(x<b)
 {
 printf("%10.1f%10.1f\n",x,modified_(1-x)*exp(-x));

 x += delta_x;
 }
}
