#include <bits/stdc++.h>
using namespace std;
const long long inf = 1e18 + 1000;
const int N = 1e2 + 10;
const int maxn = 1e6;
const int MOD = 998244353;
#define ll long long
int n, k;
ll a[N];
vector<ll> v;

int main()
{ 
    int tst;
    scanf("%d", &tst);
    while(tst--) {
        scanf("%d %d", &n, &k);
        for(int i = 1; i<= n; i++) scanf("%lld", &a[i]);
        v.clear();
        for(ll p = 1; p <= 1e16; p *= k) v.push_back(-p);
        reverse(v.begin(), v.end());
        map<ll, int> cnt;
        for(int i = 1; i <= n; i++) {
            ll x = a[i];
            while(x) {
                ll y = -(*lower_bound(v.begin(), v.end(), -x));
                x -= y;
                cnt[y]++;     
            }
        } 
        bool ans = 1;
        for(ll p = 1;ans && p <= 1e16; p *= k) {
            if(cnt[p] > 1) ans = 0;
        }
        printf("%s\n", ans?"YES":"NO" );
    }
    return 0;
}