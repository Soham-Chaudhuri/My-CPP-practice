#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;long long int l,r,k;
    cin>>n>>l>>r>>k;
    int i;long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int s=0;
    long long int maxS=0;
    for(i=0;i<n;i++)
    {
        if((a[i]>=l)&&(a[i]<=r))
        {
            
            s+=a[i];
            if(s<=k)
            {
                maxS+=1;
            }
        }
    }
    
    cout<<maxS<<endl;
    }
    return 0;
}