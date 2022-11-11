 #include<stdio.h>

int main()
 {
 int i_value = 8563;
 printf("i_value (variable name used) = 5d\n",i_value);
 printf("size of i_value = %ld (byte)\n",sizeof(i_value)); // size depends on data type

 int *i_pointer = &i_value; // norāda i_pointer (tas arī mainīgais)
                            // saturēs mainīgā i_value adresi
 printf("address of i_value (value of i_pointer) = %p\n",i_pointer);
 printf("i_value (address used) = %d\n",*i_pointer);
 
 // nowadays 64 bit architecture -> 8 bytes
 // 0x7fff6734329c -> 0x00007fff6734329c 
 printf("i_value (address used) = %d\n",*i_pointer);

 *i_pointer = (*i_pointer) + 10;
 printf("i_value (variable name used; after change) = %d\n\n",i_value);

 return 0;
 }
