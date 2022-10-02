#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long  ll;
typedef pair<int, int> pii;
// typedef vector<vector<lli>> vvlli;
// typedef vector<lli> vlli;
typedef vector<ull> vull;
// typedef pair<lli, lli> plli;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define bloop(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pop pop_back
#define inf 9999999999999
#define ninf -99999999999999
#define endl '\n'
#define setprecision(x) sp(x)
// const lli mod = 1e7 + 7;
//SORT ONE ARRAY WRT ANOTHER ARRAY
//void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
// lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}
// lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}


ll mygif(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    else
        return a / b + 1;
}

int main()
{
    ll n;
    cin >> n;
    ll i, j;
    int a[n + 1];
    ll c[5] = {0}, ans = 0;
    for (i = 1; i <= n; i++)
    {

        cin >> a[i];
        for (j = 1; j <= 4; j++)
        {
            if (a[i] == j)
            {
                c[j]++;
            }
        }
    }
    //  ll ans = 0;
    ans = ans + c[4];
    if (c[2] % 2 == 0)
    {
        ans = ans + (c[2] / 2);
        if (c[3] >= c[1])
        {
            ans = ans + c[3];
        }
        else
        {
            ans = ans + c[3];
            ans = ans + mygif(c[1] - c[3], 4);
        }
    }
    else
    {
        ans = ans + (c[2] / 2);
        if (c[3] >= c[1])
        {
            ans = ans + c[3] + 1;
        }
        else
        {
            ans = ans + c[3];
            ans = ans + mygif(c[1] + 2 - c[3], 4);
        }
    }
    cout << ans << endl;

    return 0;
}