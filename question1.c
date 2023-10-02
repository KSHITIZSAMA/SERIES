#include<stdio.h>
int main()
{
    int n,i,sum=0,f=1;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("%d",sum);
}