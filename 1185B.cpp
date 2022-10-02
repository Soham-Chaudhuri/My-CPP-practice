#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<vector<lli>> vvlli;
typedef vector<lli> vlli;
typedef vector<ull> vull;
typedef pair<lli, lli> plli;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
//#define loop(i,a,b) for(int i=a;i<=b;i++)
#define bloop(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pop pop_back
#define inf 9999999999999
#define ninf -99999999999999
#define endl '\n'
#define setprecision(x) sp(x)
#define all(x) (x.begin(),x.end())
#define pno cout<<"NO"<<endl;
#define py cout<<"YES"<<endl;
const lli mod = 1e7 + 7;

//Input vector



//SORT ONE ARRAY WRT ANOTHER ARRAY

void pairsort(lli a[], char b[], lli n)
{
    pair<int, char> pairt[n];
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}

lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}

//Sieve of erosthenes
lli prime[mod];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 #define forn(i, n) for (int i = 0; i < int(n); i++)
//string s = bitset<20>(x).to_string();
//bitset <20> b(x);x=50 or x="110010"
//lli y=b.to_ulong();
vector<pair<char,int>> split(string s) {
    char c = s[0];
    int cnt = 1;
    vector<pair<char,int>> result;
    auto ss = s.c_str();
    for (int i = 1; i <= int(s.length()); i++) {
        if (ss[i] != c) {
            result.emplace_back(make_pair(c, cnt));
            c = s[i];
            cnt = 1;
        } else
            cnt++;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      string s, t;
        cin >> s >> t;
        auto sa(split(s)), ta(split(t));
        bool ok = sa.size() == ta.size();
        if (ok)
            forn(i, sa.size())
                if (sa[i].first != ta[i].first || sa[i].second > ta[i].second)
                    ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }
   return 0;
}