#include<stdio.h>
int main()
{
    int n,i,f=1,x,sign=1;
    float sum=1,num;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    num=1.0;

    for(i=1;i<=n-1;i++)
    {
        f=f*i;
        num=num*x;
        sign=sign*(-1);
        sum=sum+sign*num/f;

    }
    printf("%f",sum);
}