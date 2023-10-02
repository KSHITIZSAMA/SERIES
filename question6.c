#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number of term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("%d",sum);
}