#include <iostream>
#include <string.h>
using namespace std;
int main()//ข้าวหลามตัดซ้อนทับ//
{
    int i,j,k,n;
    cin >> n;
    for(i=1;i<n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout << " ";
        }
        for(j=0;j<(2*i)-1;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(i=n;i>1;i--)
    {
        for(j=0;j<n-i;j++)
        {
            cout << " ";
        }
        for(j=(2*i)-1;j>0;j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(i=2;i<n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout << " ";
        }
        for(j=0;j<(2*i)-1;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(i=n;i>=1;i--)
    {
        for(j=0;j<n-i;j++)
        {
            cout << " ";
        }
        for(j=(2*i)-1;j>0;j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}