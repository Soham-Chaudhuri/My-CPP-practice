#include<bits/stdc++.h>
using namespace std;
// typedef unsigned long long ull;
typedef long double ld;
typedef long long int ull;
typedef pair<int, int> pii;
// typedef vector<vector<lli>> vvlli;
typedef vector<ull> vlli;
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
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ull n;
    cin>>n;
    vlli v,a;v.pb(0);
    a.pb(0);
    loop(i,0,n-1)
    {
        ull x;
        cin>>x;
        v.pb(x);a.pb(x);
    }
    
    sort(a.begin(),a.end());
    loop(i,2,v.size()-1)
    {
        v[i]+=v[i-1];//cout<<a[i]<<endl;
        a[i]+=a[i-1];
    }
    
    loop(i,0,v.size()-1)
    {
        //cout<<a[i]<<endl;
    }
    //cout<<endl;
    int t;cin>>t;
    while(t--)
    {
        ull x,y,z;
        cin>>x>>y>>z;
        ull s=0;
        if(x==1)
        {
            s=v[z]-v[y-1];
        }
        else
        {
            s=a[z]-a[y-1];
        }
        cout<<s<<endl;
    }
   return 0;
}