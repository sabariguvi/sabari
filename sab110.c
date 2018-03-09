#include <stdio.h>

int main()
{
    int i,k,sum=0;
    printf("enter limit");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);

    return 0;
}
