#include <stdio.h>
int main()//พีระมิด/
{
  int i,j,k;
  scanf("%d",&k);
  for(i=1;i<=k;i++)
    {
      for(j=k;j>i;j--)
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