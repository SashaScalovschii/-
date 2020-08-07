#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {


	int x,y;


printf("vvedit x");
scanf("%d",&x);

printf("vvedit y");
scanf("%d",&y);
 


if (x*x+y*y<=5)
{
	if (x*y>2)
       printf("yes");
	    else
        printf("no");	
        }
    else
        printf("yes");	
	return 0;
}