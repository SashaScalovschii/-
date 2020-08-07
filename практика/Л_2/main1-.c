#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50

int main() 
{   
  int pos,min=100000,n,P[13];

  n=13;

srand(time(NULL));

for (int i = 0; i < n; i++){
        P[i] = 1 + rand() % 50;
        printf("%4d ", P[i]);

    }

printf("\n");

//min=P[0];

for (size_t i = 0; i < n; i++)
   {
    if (min > P[i]){
      min=P[i];
     pos=i;
    }
    }
    
printf("\n");   
printf("%d",min);
printf("\n");

  /*while (pos=0)
  {
      P[pos];
      pos--;
   
  }*/

   printf("%4d ", P[pos]);
   printf("\n");
   
   for (size_t i = 0; i < n; i++)
    printf("%4d ", P[i]);

   return 0;
} 