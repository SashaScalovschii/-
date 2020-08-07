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
   
   
  int n ,J[3][4],min=-100,i,j,x,y;

for (i=0;i<3;i++) 
     {
       for (j=0;j<4;j++) 
       {
        J[i][j]= -10 +rand()%40;
        printf("%3.2d ",J[i][j]);
       }
      printf("\n");
     }


   for (i=0;i<3;i++)
		{
			for (j=0;j<5;j++)
			{
				if (J[i][j]>0)
				{
					if (J[i][j] %2 != 0)
					{
						if (J[i][j]>min)
						{
							min=J[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
		}
	
	x++; // pozitia = index + 1
	y++; // pozitia = index + 1

printf("Min=%d  ",min);
 printf("\n");
printf("Riadok=%d   Stovbetsi=%d ",x,y);
/*for (size_t i = 0; i < n; i++) {

    }
*/

   
   return 0;
}