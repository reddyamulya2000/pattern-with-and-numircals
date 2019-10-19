#include <stdio.h>
int main()
{
    int i,j;
    int space=0;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%d",j);
        for(j=i-1; j>=1; j--)
            printf("%d",j);
            
        printf("\n");
        space++;
    }
}
