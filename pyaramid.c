#include<stdio.h>
#define MAX 5
int main()
{
    int i,j;
    int k=4;
    for(i=0;i< MAX;i++)
    {
	    for(j=0;j<k;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }
		
	    printf("\n");
	    k--;	
    }
    return 0;
}
