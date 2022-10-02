#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;int maxN=INT_MIN;int k=-1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(maxN<a[i])
        {
            maxN=max(maxN,a[i]);
            k=i;
        }
    }
    sort(a,a+n);
    cout<<(k+1)<<" "<<a[n-2];
    return 0;
}