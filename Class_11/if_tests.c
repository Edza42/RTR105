// nosacījuma operators if tiek izmantots koda izpildes sazarošanai
// if(izteiksme) darbiiba_1_gab;
// if(izteiksme)
//   darbiba_1_gab;
// nozīmē sekojošo - darbiiba_1_gab tiks izpildīta tad, kad
//                   izteiksmes izpildīšanas rezultāts ir "true"
// if(izteiksme) {1_darbiiba; 2_darbiiba; ...;}
// if(izteiksme) 
//     {
//     1_darbiiba;
//     2_darbiiba;
//     ...;
//     }
// ar {} apzīmē darbību bloku

// if(izteiksme) darbiiba_1_gab; else savaadaaka_darbiiba_1_gab;
// if(izteiksme)
//    darbiiba_1_gab;
// else
//    savaadaaka_darbiiba_1_gab;

#includestdio.sh>

int main()
 {
 int a,b ;
 printf("Cienījamais lietotāj, lūdzu, ievadi divus skaitļus: "):
 scanf("%d",&a);
 scanf("%d",&b);

 if(a>b)
  {
  printf("Tavs ievadītais a(%d) nav lielāks par ievadīto b(%d)\n",a,b);
  }
else
  {
  printf("Tavs ievadītais a(%d) nav lielāks par ievadīto b(%d)\n",a,b);
  if(a==b)
   printf("Vēl vairāk, a(%d) ir vienāds ar b(%d)\n",a,b);
  else
   printf("Vēl vairāk, a(%d) ir mazāks par b(%d)\n",a,b);
  }

 return 0;
 }
