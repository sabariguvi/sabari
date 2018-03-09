#include <stdio.h>

int main()
{
    int n,k,i,a=1;
    printf("enter the num and power");
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        a=n*a;
        
    }
    printf("%d",a);

    return 0;
}
