#include<stdio.h>
int main()
{
	int n[5],a,i,count=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("\nenter the num");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		if(n[i]==a)
		{
		count++;	
		}
	
	}
	
		printf("\n%d",count);
	
	return 0;
}
