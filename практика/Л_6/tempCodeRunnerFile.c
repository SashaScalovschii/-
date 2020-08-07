 #include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 50

int main() {

 char s[255],c[255],v[255];
   int n,n1, i,i_f=0,i_n=0,i_p=0;
   printf("Enter PIP\n");
   gets(s);
   n=strlen(s);
   int a=0;

   for(i=0;i<=n;i++)
   {
   	if(s[i]=='a') 
       {
           a++;  
       }
   }
   printf("Kilkist a= %d",a); printf("\n");



   int k1,k2;

   for(i=0;i<=n;i++)
   {
   	if(s[i]==' ') 
       {
           k1=i; break;
           }
   }



   for(i=n;i>k1;i--)
   {
   	if(s[i]==' ') 
       {
           k2=i; break;
       }
   }
   printf("\n");
  
   printf("Name=\n");
   
   for(i=k1+1;i<k2;i++)
   {
    v[i]=s[i];
    n1=strlen(s);
   printf("%c",s[i]); 
   }
   printf("\n");

   printf("----------------------------------------------------"); printf("\n");


   printf("Kilkist a= %d",n1); printf("\n");


   //-------------------------------------------------------;

   printf("FirstName=\n");
   
   for(i=0;i<k1;i++)
   {
   c[i]=s[i];
   printf("%c",c[i]); 
   }
   printf("\n");

   printf("----------------------------------------------------"); printf("\n");


//------------------------------------------------------------------------------------------

printf("LastName=\n");
   
   for(i=k2+1;i<=n-1;i++)
   {
   i_p=s[i];
   printf("%c",i_p); 
   }
   printf("\n");

   printf("----------------------------------------------------"); printf("\n");


//---------------------------------------------------------------------------------------
//      я хз как найти минимальное!!!!!

printf("korodshe slovo=     ");
   
   for(i=0;i>11;i++)
   if(v[i]<c[i])
   printf("%c",c[i]);
   else
   {
       printf("%c",v[i]);
   }

   


   printf("\n");

   printf("----------------------------------------------------"); printf("\n");





	return 0;
}

