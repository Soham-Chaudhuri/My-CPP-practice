#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;int p=0;
    int a[n];
    int i;int ts=0;int ps=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];ts+=a[i];
    }
    sort(a,a+n);
    int maxs;
    if(ts%2==0)
    {
        maxs=floor(ts/2);
    }
   
    {
        maxs=(ts)/2;
    }
    for(i=n-1;i>=0;i--)
    {
        ps+=a[i];
        if((ps>maxs))
        {
            p=i;
            break;
        }
        
    }
    cout<<(n-p);


    return 0;
}