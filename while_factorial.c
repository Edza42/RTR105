#include<stdio.h>

int main(){
  long int c,i,l,a,b;

  printf("Lūdzu, ievadiet decimālu ciparu:");
  scanf("%ld",&a);
  printf("Lūdzu, izvēlieties vienu datu tipu (char-c; int-i; long long-l)\n:");
  scanf("%ld",&b);

int x,y;
  x=y=1;
if(b=c, a>=1, a<=15){
  printf("Nav iespējams aprēķināt faktoriāla vērtību\n");
  }
if(b=i, a>=1, a<=15){
  printf("Nav iespējams aprēķināt faktoriāļa vērtību\n");
  }
if(b=l, a>=1, a<=15){
  while(x<=a){
    y*=x;
    x++;
    }
  printf("Faktoriāla vērtība no %ld: %d",a,y);
}

return 0;
}
