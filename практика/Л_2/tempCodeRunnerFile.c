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

   
  int n=10,min=1000,min_1=1000,min_2=1000,min_3=1000,min_4=1000,R[10],pos=0,pos_1=0,pos_2=0,pos_3=0,sum=0;

for (int i = 0; i < n; i++){
        R[i] = -50 + rand() % 100;
        printf("%4d ", R[i]);

    }


for (size_t i = 0; i < n; i++) 
   {
        if (min > R[i])
        {
           min=R[i];
           pos=i;
    }

    }


    for (size_t i = 0; i < n; i++) 
   {
       if(i != pos){
        if (  min_1 != min &&  min_1 > R[i] )
        {
           min_1=R[i];
           pos_1=i;
    }
       }

    }
    


    for (size_t i = 0; i < n; i++) 
   {
        if(i != pos && i != pos_1){
        if (min_2 > R[i] && min_1 != min_2 && min_2 != min)
        {
           min_2=R[i];
           pos_2=i;
    }
         }
    }

     for (size_t i = 0; i < n; i++) 
   {
        if(i != pos && i != pos_1 && i != pos_2){
        if (min_3 > R[i] && min_3 != min_2 && min_3 != min && min_3 != min_1)
        {
           min_3=R[i];
           pos_3=i;
    }
         }
    }

     for (size_t i = 0; i < n; i++) 
   {
        if(i != pos && i != pos_1 && i != pos_2 && i != pos_3){
        if (min_4 > R[i] && min_4 != min_2 && min_4 != min && min_4 != min_1 && min_4 != min_3)
        {
           min_4=R[i];
           
    }
         }
    }

printf("\n"); printf("\n"); 
printf("\n"); printf("\n"); 

printf("%d  ",min);printf("%d  ",min_1);printf("%d  ",min_2);printf("%d  ",min_3);printf("%d  ",min_4);  

printf("\n"); printf("\n"); 

   printf("Suma=%d",sum=sum+min+min_1+min_2+min_3+min_4);
   return 0;
}   