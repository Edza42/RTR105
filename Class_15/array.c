// masīvi - _secīgi_ atmiņā izvietotas data vienības, pie kuru vērtībām tiek ar viena un tā paša vārda (vai identifikatora) palīdzību - a[0], a[1], a[2], ...

// NB! masīva vārds - tā ir norāde
// NB! masīva adrese - tā pirmā elementa adrese
// NB! masīva pirmā elementa indekss ir 0

#include<stdio.h>

int main()
 {
 int i_array_1[10]; // int lielumu masīva deklarēšana
                    // (piesaukt drīkst, bet vērtības nav zināmas)
 int i_array_2[3] = {1,2,3}; // int lielumu masīva definēšana
 int i_array_3[5] = {4,5,6}; // masīva pēdējie divi elementi būs ar 0 vērtībām
 int i_array_with_zeros[5] = {0}; // masīva vērtības ir nulles
