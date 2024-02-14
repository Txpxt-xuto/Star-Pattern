#include <stdio.h>
#include <string.h>
int main()//สี่เหลี่ยมพร้อมเส้นทแยงมุม//
{
    int i,j,k,N;
    scanf("%d",&N);
    if(N>=9 && N%2==1)
    {
        for(i=1;i<=N;i++)
        {
            if(i==1 || i==N)
            {
                for(j=1;j<=N;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            else if(i!=1 && i!=N)
            {
                if(i>(N+1)/2)
                {
                    printf("*");
                    for(j=1;j<N-i;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=(2*i)-N;j>2;j--)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=1;j<N-i;j++)
                    {
                        printf(" ");
                    }
                    printf("*\n");

                }
                else if(i<(N+1)/2)
                {
                    printf("*");
                    for(j=1;j<i-1;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=1;j<=N-(2*i);j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=1;j<i-1;j++)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }
                else if(i=(N+1)/2)
                {
                    printf("*");
                    for(j=1;j<i-1;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=1;j<i-1;j++)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }

            }

        }
    }
}