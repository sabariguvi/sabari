#include<stdio.h>
int main()
{
	int b,a,c,i,sum=0;
	printf("\nenter no.of.elements in ap series ");
	scanf("%d",&a);
	printf("\nenter starting number ");
	scanf("%d",&b);
	printf("\nenter the diff");
	scanf("%d",&c);
	for(i=0;i<a;i++)
	{
		sum=sum+b;
		b=b+c;
		
	}
	printf("\n%d ",sum);
}
