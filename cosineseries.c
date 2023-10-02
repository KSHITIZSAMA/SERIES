#include<stdio.h>
int main()
{
    int n,den,sign,i;
    float num,sum,x;
    printf("Enter the number of terms: ");
    scanf(" %d",&n);
    printf("Enter the angle in degree: ");
    scanf(" %f",&x);
    x=x*22.0/7/180;
    num=1;
    den=1;
    sign=1;
    sum=1;
    for(i=0;i<n-1;i++)
    {
        num=num*x*x;
        den=den*(2*i)*((2*i)-1);
        sign=sign*-1;
        sum=sum+sign*num/den;
    }
    printf("Sum of series is %f",sum);

}