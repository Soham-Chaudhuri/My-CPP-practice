#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;cin>>k;int s=0;
    int a[n];int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i]>=a[k-1])&&(a[i]>0))
        {
            s+=1;
        }
    }
    cout<<s;
    
    return 0;

}