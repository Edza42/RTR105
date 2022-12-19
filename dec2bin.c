#include<stdio.h>

int main(){
  char bin [256];
  int dec;

  do{
    printf("Lūdzu, ievadi naturālu skaitli:");
    scanf("%d", &dec);

    if (dec < 0);
  }
  while (dec < 0);

  int lenght = 0;

  do
  {
     if (dec % 2 == 0) bin[lenght] = '0';
     else bin[lenght] = '1';

     dec /= 2;
     lenght++;
  }
  while (dec != 0);

  bin[lenght] = '\0';

  int middle = lenght / 2;

  char temp;
  for (int i = 0; i < middle; i++)
  {
     temp = bin[i];
     bin[i] = bin[lenght - i - 1];
     bin[lenght - i - 1] = temp;
  }
  printf("\nBinārais skaitlis: %s\n\n", bin);
  return 0;
}
