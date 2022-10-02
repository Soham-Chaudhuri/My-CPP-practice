#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef unsigned long long ll;
const int N=2e5+100;
ll a[N];
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
    cin >> k >> n;
    for (int i=1;i<=n*k;i++){
        cin >> a[i];
    }
    ll x=(k+1)/2 - 1;
    x = k - x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if (z<=0) break;
        ans+=a[z];//cout<<a[z]<<endl;
    }
    cout << ans << endl;

        
    }
    return 0;
}