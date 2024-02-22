#include <stdio.h>
int main()//พีระมิดตัวอักษร//
{
    int i,j,k,sum=0;;
    char line[25];
    scanf("%s",&line);
    i=0;
    while(i>=0)
    {
        if(line[i]>=32 && line[i]<=127)
        {
            sum++;
            i++;
        }
        else 
        {
            break;
        }
    }
    for(i=0;i<sum;i++)
    {
        for(j=2;j<(sum-i)*2;j++)
        {
            printf(" ");
        }
        for(j=i;j>=0;j--)
        {
            printf("%c ",line[j]);
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",line[j]);
        }
        printf("\n");
    }
}