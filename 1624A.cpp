#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,maxs=INT_MIN,mins=INT_MAX;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];maxs=max(maxs,a[i]);mins=min(mins,a[i]);
        }
        cout<<(maxs-mins)<<endl;
    }
    return 0;
}