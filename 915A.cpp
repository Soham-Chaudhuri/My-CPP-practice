#include<bits/stdc++.h>
using namespace std;
/*
int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;b=rem;
    }
    return a;
}
*/

int main(){
    int n,k;
    cin>>n>>k;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(k%a[i]==0)
        {
            p=min(p,(k/a[i]));

        }
    }
    cout<<p<<endl;
    return 0;
}