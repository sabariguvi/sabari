#include <stdio.h>
#include <string.h>
int main()
{
   char a[100];
   printf("enter string");
   scanf("%s",&a);
   int n,i,b,x;
   b=strlen(a);
   printf("enter limit");
   scanf("%d",&n);
   x=b-n;
   
   for(i=x;i<=b;i++)
   {
       printf("%c",a[i]);
   }
    return 0;
}
