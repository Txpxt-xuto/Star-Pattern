#include <iostream>
#include <string.h>
using namespace std;
int main()//เครื่องหมายสวัสดิกะ//
{
    int n,i,j;
    cout << "ใส่ค่าขนาดของเครื่องหมาย (ค่ามากกว่าหรือเท่ากับ 5 และเป็นเลขคู่) : ";
    if(n>=5 && n%2==1)
    {   cin >> n ;
        cout << "*";
        for(j=0;j<(n/2)-1;j++) cout << " ";
        for(j=0;j<(n/2)+1;j++) cout << "*";
        cout << endl;
        for(i=0;i<(n/2)-1;i++)
        {
            cout << "*";
            for(j=0;j<(n/2)-1;j++) cout << " ";
            cout << "*";
            cout << endl;
        }
        for(j=0;j<n;j++) cout << "*";
        cout << endl;
        for(i=0;i<(n/2)-1;i++)
        {
            for(j=0;j<(n/2);j++) cout << " ";
            cout << "*";
            for(j=0;j<(n/2)-1;j++) cout << " ";
            cout << "*";
            cout << endl;
        }
        for(j=0;j<(n/2)+1;j++) cout << "*";
        for(j=0;j<(n/2)-1;j++) cout << " ";
        cout << "*";
    }
}