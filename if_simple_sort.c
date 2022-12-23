#include<stdio.h>
 int main(){

  int dec1;
  int dec2;
  int dec3;
  int secība;
  int a = 'a';

  printf("Lūdzu, ievadiet pirmo dec skaitli:");
  scanf("%d", &dec1);
  printf("Lūdzu, ievadiet otro dec skatli:");
  scanf("%d", &dec2);
  printf("Lūdzu, ievadiet trešo dec skaitli:");
  scanf("%d", &dec3);
  printf("Lūdzu, izvēiieties. Augoša secība - a. Dilstoša secība - d:");
  scanf("%d", &secība);

  if(dec1>dec2 && dec2>dec3){
    if(secība == a){
      printf("%d %d %d\n", dec3, dec2, dec1);
    }
     else {
      printf("%d %d %d\n", dec1, dec2, dec3);
    }
  }

 else if(dec1>dec3 && dec3>dec2){
    if(secība == a){
      printf("%d,%d,%d\n", dec2, dec3, dec1);
    }
     else {
      printf("%d,%d,%d\n", dec1, dec3, dec2);
    }
 }

 else if(dec2>dec1 && dec1>dec3){
     if(secība == a){
       printf("%d,%d,%d\n", dec3, dec1, dec2);
     }
      else {
         printf("%d,%d,%d\n", dec2, dec1, dec3);
      }
 }

 else if(dec2>dec3 && dec1>dec3){
   if(secība == a){
     printf("%d,%d,%d\n", dec1, dec3, dec2);
   }
   else {
      printf("%d,%d,%d\n", dec2, dec3, dec1);
   }
 }

 else if(dec3>dec1 && dec1>dec2){
    if(secība == a){
       printf("%d,%d,%d\n", dec2, dec1, dec3);
    }
    else {
       printf("%d,%d,%d\n", dec3, dec1, dec2);
    }
 }

 else if(dec3>dec2 && dec2>dec1){
    if(secība == a){
       printf("%d,%d,%d\n", dec1, dec2, dec3);
    }
    else {
       printf("%d,%d,%d\n", dec3, dec2, dec1);
    }
 }
return 0;
}
