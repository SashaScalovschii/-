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
  
   
  int n,x,y,A[6][6],g=0,no=0,i,j,b=0;

 
  for (i=0;i<3;i++) 
     {
       for (j=0;j<4;j++) 
       {
        A[i][j]= -5 +rand()%10;
        printf("%3.2d ",A[i][j]);
       }
      printf("\n");
     }




        for (i=0;i<3;i++) 
         {   
	     	g++;  printf("Riadok=%d ",g);
	      	if (A[i][1]>0 )
            {   b++;
              printf("%d",b);
          for (j=0;j<4;j++) {
            if (A [i][j]!=0){
            n++;
		
		
	       	               }
  
           } printf("\n");
	      printf("NE Nuliovih - %d ",n); printf("\n");
    }	   
         
        n=0; 
         }


  


	/*for (i=0;i<3;i++)
		{
			for (j=0;j<5;j++)
			{
				if (k[i][j]>0)
				{
					if (k[i][j]%2!=0)
					{
						if (k[i][j]<min)
						{
							min=k[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
		}
	
	x++; // pozitia = index + 1
	y++; // pozitia = index + 1 */


   
   return 0;
}