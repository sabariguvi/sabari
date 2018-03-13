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
	if(count>0)
	{
		printf("\nyes");
	}
	else
	printf("\nno");
	return 0;
}
