#include<stdio.h>
int main()
{
    int n,i,f=1;
    float sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f/i;
    }
    printf("%f",sum);


}