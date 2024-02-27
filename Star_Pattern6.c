#include <stdio.h>
int main()//Heart//
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf(" ");
        for(j=n-i;j>1;j=j-2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=-1;j--)
        {   
            printf(" ");
        }
        for(j=i*2-1;j>0;j--)
        {   
            printf("*");
        }
        printf("\n");
    }

}