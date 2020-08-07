#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50

void func(int n,int *a)
{	srand(time(NULL));
	int i;
	for(i=0;i<n;i++)
	{
        a[i]=rand()%40-10;
	    printf("%d\t",a[i]);
	
	}
}


void suma(int n,int *a)
{
	int i, idx1,idx,min=a[0], max=a[0],sum=0;
	for(i=0;i<n;i++)
	{
		 if(max>a[i]) 
         {
              max=a[i]; 
              idx1=i; 
              }
	}
    printf("\nIndex maximal= %d",idx1);

    for(i=0;i<n;i++)
	{
		 if(min<a[i]) 
         {
              min=a[i]; 
              idx=i; 
              }
	}

	printf("\nIndex minimal= %d",idx);
	printf("\n");

    for (i=0; i<50; i++)
    if (a[i]>5 && a[i]< 10)
        sum = sum + a[i];

    printf("\nSuma= %d ",sum);
	printf("\n");

	
}

int main() {
	srand(time(NULL));
	
	int n;
	printf(" Size of array \n");
	scanf("%d",&n);
	int a[n]; 
	printf("Masiv:\n");
	
	func(n,a);
    suma(n,a);

	return 0;
}