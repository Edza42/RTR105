// "Ievads algoritmu valodā C", Juris Ziemelis
#include<stdio.h>

int main()
 {
 // printf("a mainīgā vērtība pirms deklarēšanas: %c\n",a);
 // nedrīkst izmantot pirms deklarēšanas!

 char a; // mainīgā ar identifikatoru (vai vārdu) "a" deklalēšana
         // ar identifikatoru a viennozīmīgi tiek sasaistīts kāds atmiņas 
         // apgabals - kur (vai vieta)? un cik (vai izmērs)? uz jautājumu
         // detalizēti kur? (adrese) atbildēsim citā  nodarbībā
         // cik? - 1 byte, jo ... char
         // komentārs par vārdu vai (idntifikātoru) - drīkst saturēt _
         // burtus (ir starpība starp lieliem un maziem burtiem - a nav A -
         // casesensitive), ciparus, bet nedrīkst sākties ar ciparu,
         // var būt mnemonisks, piemēram - cilindra_tilpums
 printf("a mainīgā vērtība (kā simbols) uzreiz pēc deklarēšanas: %c",a)
 printf("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc deklarēšanas: %c",a)
 printf("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc deklarēšanas: %c",a)
 printf("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc deklarēšanas: %c",a)
 //;;;;;;;;;// daudzi tukšie operatori

 //int a;
 //nedrīkst (šādi) pārdeklarēt mainīgo

 // NB! mainīgā būtība - mainīties
 a = 89; // "=" - piešķiršanas operācija
         // pa kreisi ir - 89 - atbilstoši noformējuma (pierakstam) tā ir
         // int tipa (4 bytes) konstanste pierakstīta, izmantojot dec 
         // skaitīšanas sistēmu => 89 = 64(2"6) + 16(2"4) + 8(2"3) + 1(2"8)
         // 0000 0000  0000 0000  0000 0000  0101 1001
         // a = 89; -> mainīgā a 1 baitā tiek ierakstīts 0101 1001 printf("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc deklarēšanas: %

 a = 160;
 // char -> signed char =>

 char b = 93; // definēšana - deklarēšana ar piešķiršanu
              // prioritārā (tiks izpildīta pirmā) darbība šeit ir deklarēšana
              // piešķiršanas operācijai ir zemākā prioritāte
 return 0; 
 }
