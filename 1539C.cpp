// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// typedef long double ld;
// typedef long long int lli;
// typedef pair<int, int> pii;
// typedef vector<vector<lli>> vvlli;
// typedef vector<lli> vlli;
// typedef vector<ull> vull;
// typedef pair<lli, lli> plli;
// #define max3(a,b,c) max(max((a),(b)),(c))
// #define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
// #define min3(a,b,c) min(min((a),(b)),(c))
// #define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
// #define loop(i,a,b) for(int i=a;i<=b;i++)
// #define bloop(i,a,b) for(int i=a;i>=b;i--)
// #define pb push_back
// #define pop pop_back
// #define inf 9999999999999
// #define ninf -99999999999999
// #define endl '\n'
// #define setprecision(x) sp(x)
// #define all(x) x.begin(),x.end()
// #define pno cout<<"NO"<<endl;
// #define py cout<<"YES"<<endl;
// const lli mod = 1e7 + 7;

// //Input vector
// void inall(vlli &v,lli n)
// {
//     loop(i,0,n-1)
//     {
//         lli x;
//         cin>>x;
//         v.pb(x);
//     }
// }

// //Binary_Search
// bool possible(){}

// lli bs(lli l,lli u,lli x)
// {
//     lli ans=0;
//     while(l<=u)
//     {
//         lli mid=(l+u)/2;
//         if(possible())
//         {
//             ans=mid;
//             //
//         }
//         else
//         {
//             //
//         }
//     }
//     return ans;
// }


// //SORT ONE ARRAY WRT ANOTHER ARRAY

// void pairsort(lli a[], char b[], lli n)
// {
//     pair<int, char> pairt[n];
//     for (int i = 0; i < n; i++)
//     {
//         pairt[i].first = a[i];pairt[i].second = b[i];
//     }
//     sort(pairt, pairt + n);
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = pairt[i].first;
//         b[i] = pairt[i].second;
//     }
// }

// lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}

// lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

// lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}

// //Sieve of erosthenes
// lli prime[mod];
// void SieveOfEratosthenes(int n)
// {
//     memset(prime, true, sizeof(prime));
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }
 
// //string s = bitset<20>(x).to_string();
// //bitset <20> b(x);x=50 or x="110010"
// //lli y=b.to_ulong();

// void f(){
//     // lli n,k,x;
//     // cin>>n>>k>>x;
//     // vlli v;
    
//     // loop(i,0,n-1)
//     // {
//     //     lli y;
//     //     cin>>y;
//     //     v.emplace_back(y);
//     // }
//     // sort(all(v));
//     // // for(auto it:v)
//     // // {
//     // //     cout<<it<<endl;
//     // // }
//     // vlli diff;lli res=1;
//     // loop(i,0,n-2)
//     // {
        
//     //     {if(v[i+1]-v[i]>x)
//     //     {
//     //         res++;
//     //         lli val = (v[i+1] - v[i]) / x;
//     //         if ((v[i+1] - v[i]) % x > 0)
//     //             val++;
 
//     //         diff.emplace_back(val - 1);
//     //     }}
//     // }
//     // sort(all(diff));
//     // // cout<<diff.size()<<endl;
//     // // for(auto it:diff)
//     // // {
//     // //     cout<<it<<endl;
//     // // }
//     // sort(diff.begin(), diff.end());
//     // loop(i, 0, diff.size()-1){
//     //     if (k >= diff[i]){
//     //         k -= diff[i];
//     //         res--;
//     //     }
//     // }
 
//     // cout << res <<endl;
//     lli n, k, x;
//     cin >> n >> k >> x;
//     if(n==1)
//     {
//         cout<<1<<endl;return;
//     }
//     lli a[n];
//     loop(i, 0, n-1)
//         cin >> a[i];
 
//     sort(a, a + n);
//     lli res = 1;
 
//     vector<lli> diff;
//     loop(i, 1, n-1){
//         if ((a[i] - a[i - 1]) > x){
//             res++;
            
//             lli val = (a[i] - a[i - 1]) / x;
//             if ((a[i] - a[i - 1]) % x > 0)
//                 val++;
 
//             diff.push_back(val - 1);
//         }
//     }
    
//     sort(diff.begin(), diff.end());
//     loop(i, 0, diff.size()-1){
//         if (k >= diff[i]){
//             k -= diff[i];
//             res--;
//         }
//     }
 
//     cout << res << endl;

// }

// int main()
// {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);//int t;cin>>t;while(t--)
//     {
//       //YOUR CODE GOES HERE
//       //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
//       f();
//     }
//    return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fu(i, a, b) for(ll i = a; i < b; i++)
#define fd(i, a, b) for(ll i = a - 1; i >= b; i--)
#define fastifier ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); auto time_begin = chrono::steady_clock::now();
#define x first
#define y second
#define nl endl
#define pl pair<ll, ll>
#define bit(i, k) (i & (1 << k))
#define cbit(i) __builtin_popcount(i)
//#define timeElapsed auto time_end = chrono::steady_clock::now(); cerr << "\nTime Elapsed: " << chrono::duration_cast<chrono::milliseconds>(time_end - time_begin).count() / 1000.0 << "s" << std::endl; //use file input for more consistent time!!
#define fileInput freopen("input.txt", "r", stdin);
#define fileOutput freopen("output.txt", "w", stdout);
#define uid(a, b) uniform_ll_distribution<ll>(a, b)(rng)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

template<class T> bool maxi(T& a, const T& b) {
    return a < b ? a = b, 1 : 0;
}

template<class T> bool mini(T& a, const T& b) {
    return a > b ? a = b, 1 : 0;
}

const ll inf = 1e18;
const ll mod = 1e9+7;
const ll def = 2e6;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;

    ll a[n];
    fu(i, 0, n)
        cin >> a[i];

    sort(a, a + n);
    ll res = 1;

    vector<ll> diff;
    fu(i, 1, n){
        if ((a[i] - a[i - 1]) > x){
            res++;
            
            ll val = (a[i] - a[i - 1]) / x;
            if ((a[i] - a[i - 1]) % x > 0)
                val++;

            diff.push_back(val - 1);
        }
    }
    
    sort(diff.begin(), diff.end());
    fu(i, 0, diff.size()){
        if (k >= diff[i]){
            k -= diff[i];
            res--;
        }
    }

    cout << res << nl;
} 

int main(){
    fastifier; 
    ll t;
    t = 1;
    
    while (t--)
    {
        solve();
    }
    return 0;
    //timeElapsed;
}