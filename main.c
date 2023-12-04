#include <stdio.h>
#include <stdlib.h>

int main()
{
   char emir[100];
   char *pointer;

   printf("Lutfen bir karakter dizisi  giriniz.\n");
   gets(emir);

   for(pointer=emir;*pointer;pointer++)
    {

    }
    printf("Dizimiz %s %d karakterden olusmaktadir.",emir,pointer-emir);
}
