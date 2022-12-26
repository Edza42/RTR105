#include<stdio.h>

int main(){
  long int a,b,c,i,l;
  printf("Ievadiet vienu decimālu skaitli:");
  scanf("%ld",&a);
  printf("Izvēlieties datu tipu (char-c; int-i; long long-l)\n:");
  scanf("%ld",&b);

  int x,y;
  y=1;
  if(b=c, a>=1, a<=15){
    printf("Nav iespējams aprēķināt faktoriāļa vērtību\n");
  }
  if(b=i, a>=1, a<=15){
    printf("Nav iespējams aprēķināt faktoriāļa vērtību\n");
  }
  if(b-l, a>=1, a<=15){
    for(x=1; x<=a; x++){
       y=y*x;
    }
   printf("Faktoriāļa vērtība no %ld: %d",a,y);
  }
return 0;
}
