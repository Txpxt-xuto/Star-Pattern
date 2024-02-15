#include <stdio.h>
int main()//ผีเสื้อโบยบิน//
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=(k*2)-1;j>=2*i-1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=2*k+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=k;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        for(j=2*i-1;j<=(k*2)-1;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}