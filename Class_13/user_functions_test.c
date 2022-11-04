// Lietotāja funkcijas tiek pielietotas vairākkārtējai vienu un to pašu koda fragmentu pildīšanai (pašas koda rindiņas ir aprakstītas tikai vienu reizi)

#include<stdio.h>

dialogs() // tāpat kā mainīgajam, funkcijai ir datu tips, funkcijas datu tips parasti ir saskaņots ar atgriežamo (return) lieluma (mainīgais vai izteiksme) datu tipu, ja nav paredzēts, ka funkcija kaut ko 
          // atgriezīs, tad datu tips - void

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli:");
 scanf("%hhd", &c);
 printf("Ievadītais skaitlis: %hhd\n", &c);

char dialogs_with_return()
 {
 char c_dialogs_local;

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli:");
 scanf("%hhd", &c);
 printf("Ievadītais skaitlis: %hhd\n", &c);
 }

int main()
 {
 char c_main_local;

 dialogs();

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli:");
 scanf("%hhd", &c);
 printf("Ievadītais skaitlis: %hhd\n", &c);

 {;;;;;;;} // kāds cits koda fragments

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli:");
 scanf("%hhd", &c);
 printf("Ievadītais skaitlis: %hhd\n", &c);

 dialogs();

 = dialogs_with_return();

 return 0;
 }
