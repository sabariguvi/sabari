#include <stdio.h>
int main()
{ 
    int n;
   printf("enter num");
   scanf("%d",&n);
   if(n%2==0)
   {
       printf("%d",n/2);
   }
   else
   {
       printf("%d",n);
   }
    return 0;
}
