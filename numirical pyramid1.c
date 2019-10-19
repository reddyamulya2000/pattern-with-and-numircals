#include<stdio.h>
int main()
{
	int i,j,k,l=1;
	for(i=1; i<=5; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf(" ");
		}
		
		for(k=1; k<=l; k++)
		{ 
			printf("%d",k);
		}            
			l = l+2;    
	    printf("\n");
	}
    return 0;
}
