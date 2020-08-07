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
    int i=0,j=0,max=0,x,y,g=5;
    int m[5][5];
	
    srand(time(NULL));

    for (i=1;i<5;i++)
        {
            for (j=1;j<5;j++)
            {
                m[i][j]=-10 +rand()%25;
            }
            
        }



        for (i=1;i<5;i++)
        {
            for (j=1;j<g;j++)
            {
                printf ("%3.2d ",m[i][j]);
            }
            printf ("\n");
            g--;
        }
        
        g=5;
        for (i=1;i<5;i++)
        {

            for (j=1;j<g;j++)
            {
             
                if (m[i][j]>max)
                {
                    max=m[i][j];
                    x=i;    
                    y=j;
                }    

            }
            g--;

        }


            printf ("maximaliniy element = %d ",max); printf ("\n");
            printf ("yogo indexi i=%d j= %d",x,y);

	return 0;
}

