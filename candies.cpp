#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    int i;
    for(i=0;i<m;i++)
    {
        a[i]=n/m;
    }
    int t=n%m;
    for(i=t-1;i>=0;i--)
    {
        a[i]+=1;
    }
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}