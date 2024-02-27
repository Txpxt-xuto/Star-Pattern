#include <stdio.h>
int main()//ต้นคริสต์มาส//
{
    int i,j,k,n;
    scanf("%d",&n);
    for(k=2;k<=n+1;k++)
    {
        for(i=1;i<=k;i++)
        {
            for(j=n+1;j>i;j--)
            {
                printf(" ");
            }
            for(j=1;j<=i*2-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
        
    //ฐานราก
    for(i=1;i<=n;i++)
    {
        printf(" ");
    }
    printf("|\n");
    for(i=1;i<=n;i++)
    {
        printf("=");
    }
    printf("V");
    for(i=1;i<=n;i++)
    {
        printf("=");
    }
}