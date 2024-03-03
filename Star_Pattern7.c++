#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k,n;
    string words[100];
    scanf("%s",&words);
    for(i=0;i<=words[100].length();i++)
    {
        if(words[i]=='A')
        {
            for(j=0;j<0;j++)
            {
                printf("     *");
                for(k=5-j;k>0;k--)
                {
                    printf(" ");
                }
                printf("*");
                for(k=j;k<5;k++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
        }
        else if(words[i]=='B')
        {
            
        }
    }
}