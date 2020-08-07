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
    int i=0,j=0,max=0,x,y,g=4,x1,y1,max1=0,ser;
    int m[3][3];
	
    srand(time(NULL));

    for (i=1;i<4;i++)
        {
            for (j=1;j<4;j++)
            {
                m[i][j]=-5 +rand()%25;
                 printf ("%3.2d ",m[i][j]);
            }
            printf ("\n");
            
        }
printf ("\n");


/*
/*
             diagonal 1                                                

         for (i=1;i<4;i++)
        {
            for (j=1;j<g;j++)
            {
                printf ("%3.2d ",m[i][j]);
            }
            printf ("\n");
            g--;
        }


printf ("\n"); 

//          Diagonal 2
g=2;


         for (i=1;i<4;i++)
        {
            for (j=1;j<g;j++)
            {
                printf ("%3.2d ",m[i][j]);
            }
            printf ("\n");
            g++;
        }

printf ("\n");   */

        
        g=4;
        for (i=1;i<4;i++)
        {

            for (j=1;j<g;j++)
            {
             printf ("%3.2d ",m[i][j]);
                if (m[i][j]>max)
                { 
                    max=m[i][j];
                    x=i;    
                    y=j;
                }    

            }
            g--;printf ("\n");

        }
printf ("\n");


        g=2;
        for (i=1;i<4;i++)
        {

            for (j=1;j<g;j++)
            {    
             printf ("%3.2d ",m[i][j]);
                if (m[i][j]<max1)
                {
                    max1=m[i][j];
                    x1=i;    
                    y1=j;
                }    

            }
            g++; printf ("\n");

        }



            printf ("maximaliniy element = %d ",max); printf ("\n");
            printf ("yogo indexi i=%d j= %d",x,y);
printf ("\n");
            printf ("minimaliniy element = %d ",max1); printf ("\n");
            printf ("yogo indexi i=%d j= %d",x1,y1);

            ser= (max+max1) /2;   printf ("\n");

       printf ("seredne = %d ",ser);

	return 0;
}

