#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
    int i;
   printf("enter string");
   scanf("%[^\n]s",a);
  for(i=0;i<strlen(a);i++)
  {
      if(a[i]==' ')
      
      a[i+1]=toupper(a[i+1]);
  }
  printf("%s",a);
    return 0;
}
