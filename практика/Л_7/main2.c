#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50


void func(int n,int m,int a[n][m])
{	srand(time(NULL));

	int i,j; 
	for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
	{
        a[i][j]=2*m*(rand()%13-13)+16*n;

	printf("%d \t",a[i][j]);}
	printf("\n");}
	
	
}

void index(int n,int m,int a[n][m])
{
	int i,j, i_idx,j_idx, min=a[0][0];
	for(i=0;i<n;i++)
	{for (j=0;j<m;j++)
		 if(min>a[i][j]) { min=a[i][j]; i_idx=i;j_idx=j; }
	}
	printf("\n Index of minimal: i=  %d     \n \t\t   j= %d",i_idx+1,j_idx+1);
	printf("\n");

}

void index1(int n,int m,int a[n][m])
{
	int i,j, i_idx,j_idx, max=a[0][0];
	for(i=0;i<n;i++)
	{for (j=0;j<m;j++)
		 if(max<a[i][j]) { max=a[i][j]; i_idx=i;j_idx=j; }
	}
	printf("\n Index of maximal: i= %d \n \t\t   j= %d",i_idx + 1,j_idx + 1);
	printf("\n");

}


void suma (int n, int m,int a[n][m])
{	
    int i,j;
    int sum=0;
	for(i=0;i<n;i++)
     {
         for(j=i;j<m;j++)
	     sum+=a[i][j];
	}

	printf("SUMA: %d\t",sum);
}



int main() {
	srand(time(NULL));
	
	int n,m;
	printf("Size of matrix\n");
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m]; 

	printf("Matrix:\n");
	
	func(n,m,a);
	suma(n,m,a);
    index(n,m,a);
    index1(n,m,a);

	return 0;
}