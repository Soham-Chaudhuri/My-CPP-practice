#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int i;long long int s=0;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];s+=a[i];
        }
        long long int k=s%n;
        long long int ans=k*(n-k);
        cout<<ans<<endl;

    }
    return 0;
}