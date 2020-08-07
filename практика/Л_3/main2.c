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
  
   
  int n,x,y,G[6][6],g=0,no=0,i,j;

 
  for (i=0;i<6;i++) 
     {
       for (j=0;j<6;j++) 
       {
        G[i][j]= -5 +rand()%10;
        printf("%3.2d ",G[i][j]);
       }
      printf("\n");
     }




 for (i=0;i<6;i++) 
    {   
		g++;
		if ( g%2 != 0)
{		  printf("Riadok=%d ",g);

       for (j=0;j<6;j++) {
        if (G[i][j]!=0){
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