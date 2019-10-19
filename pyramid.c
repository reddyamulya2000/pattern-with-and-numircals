#include<stdio.h>
#define MAX	5
int main()
{
	int i,j;
	int space=4;
	for(i=0;i< MAX;i++)
	{
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		
		printf("\n");
		space--;
	}
	space=0;
	for(i=MAX;i>0;i--)
	{
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		for(j=0;j< i;j++)
		{
			printf("* ");
		}
		
		printf("\n");
		space++;
	}
    return 0;
}
