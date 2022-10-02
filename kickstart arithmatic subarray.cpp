#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pd=a[0]-a[1];int maxN=INT_MIN;int c=2;
    for(int i=0;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            c+=1;
        }
        else
        {
            pd=a[i]-a[i-1];
            c=2;
        }
        maxN=max(maxN,c);
    }
    cout<<maxN<<" ";

    }
    return 0;
}