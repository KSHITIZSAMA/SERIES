#include<stdio.h>
int main()
{
    
    float sum,num,x;
    int i,den,n,sign;
    printf("Enter x and n");
    scanf("%f%d",&x,&n);
    x=x*22/7/180;
    sum=x;
    num=x;
    den=1;
    sign=1;
    for(i=1;i<=n-1;i++)
    {
        num=num*x*x;
        den=den*(2*i)*(2*i+1);
        sign=sign*(-1);
        sum=sum+num/den*sign;
    }
    printf("output=%f",sum);

}