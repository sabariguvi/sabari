#include <stdio.h>

int main()
{
    int a[5],i,min;
    printf("enter values");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);

    return 0;
}
