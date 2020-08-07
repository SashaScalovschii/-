#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50

int main() {
	srand(time(NULL));
	int **A;
	int i,n,m,j,*min,*sum,*max,*l;
	max=(int*)malloc(sizeof(int));
	l=(int*)malloc(sizeof(int));
	A=(int**)malloc(5*sizeof(int*));

//---------------------------------------------------------------------------

	for(i=0;i<6;i++)

	A[i]=(int*)malloc(6*sizeof(int));

	printf("Golosuvannia\n");
 
    printf("---------------------------------------------------"); printf("\n");

	for(i=0;i<6;i++)
    {
	 for(j=0;j<5;j++)
      {
	    A[i][j]= 1 +rand()%200;
	    printf("%4.3d\t",A[i][j]);
      }
     	printf("\n");
    }

    printf("----------------------------------------------------");
	
	printf("\n");

     max=&A[0][0];
        *l=1;

      for(j=0;j<5;j++)
      {
     	if(*max<A[0][j])
         {
             max=&A[0][j]; 
             *l=(j+1);
         }
	  }

     	printf("V 1 naselenomu puncti naybilse nabrav %d kandudat - %d golosiv",*l,*max);
	    printf("\n");

       printf("----------------------------------------------------"); printf("\n");

     max=&A[0][0];
     *l=1;
     for(j=0;j<5;j++)
     {
	  if(*max>A[0][j])
      {
          max=&A[0][j]; *l=(j+1);
          }
	 }

	 printf("V 1 naselenomu puncti naymense nabrav %d kandudat - %d golosiv",*l,*max); 



	return 0;
}
