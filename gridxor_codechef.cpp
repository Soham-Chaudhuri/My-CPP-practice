#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n];
       ll sum=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
    }
   return 0;
}