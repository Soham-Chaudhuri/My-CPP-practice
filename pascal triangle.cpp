#include<iostream>
#include<math.h>
using namespace std;
int fact(int a)
{
    int i;int s=1;
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    return s;
}


int main()
{
    int n;
    cin >> n;
    int i , k , j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
        k=fact(i)/(fact(i-j)*fact(j));
        cout<<k<<" " ;
        }
        cout<<endl;
    }
    return 0;
}