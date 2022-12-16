#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
 float a=0.,b=2*M_PI,x,delta_x=1.e-2;

 float * buffer1;
 int NN = (b-a)/delta_x + 1; // masīvas izmērs elementos
 buffer1 = (float*) malloc (NN * sizeof(float));

 //float y;
 printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
 x = a;
 int i = 0;
 i = 0;
 while(x<b){
  //y = sin(x);
  printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x)
      ;
  //printf("%10.2f\t%10.2f\n",x,y);
   buffer1[ i ] = x;
  x += delta_x;//x = x + delta_x;
  i++;
    }
  i = 0;
  while(i<NN)
   {
  printf("%10.2f\n",buffer1[i]);
  i++;
  }
}
