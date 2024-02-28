#include <stdio.h>
#include<stdio.h>
int main()//Heart//
{
	int i,j,size;
	scanf("%d",&size);
	printf("\n");
	for(i=size/2;i<=size;i+=2)
	{
		for(j=1;j<size-i;j+=2)
        {
            printf(" ");
        }
			
		for(j=1;j<=i;j++)
		{
            printf("*");
        }
		for(j=1;j<=size-i;j++)
		{	
            printf(" ");
        }
		for(j=1;j<=i;j++)
        {
			printf("*");
        }
		printf("\n");
    }
	for(i=size;i>=1;i--)
	{
		for(j=i;j<size;j++)
		{	
            printf(" ");
        }
		for(j=1;j<=(i*2)-1;j++)
		{	
            printf("*");
        }
		printf("\n");
    }
}