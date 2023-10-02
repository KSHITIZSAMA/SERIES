#include<stdio.h>
int main()
{
   int i,sign=1,n;
   float sum=1,den=1;
   printf("Enter number of terms");
   scanf("%d",&n);
   for(i=1;i<=n-1;i++)
   {
    den=den*(2*i)*((2*i)+1);
    sign=sign*(-1);
    sum=sum+sign*(i+1)/den;
   }
   printf("%f",sum);
}