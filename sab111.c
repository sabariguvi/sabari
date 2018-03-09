#include <stdio.h>

int main()
{
    
    int n,count=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        count++;
    }
    printf("no of digit %d",count);
    return 0;
}
