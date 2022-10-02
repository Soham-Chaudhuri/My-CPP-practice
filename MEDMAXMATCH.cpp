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
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define bloop(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pop pop_back
#define inf 9999999999999
#define ninf -99999999999999
#define endl '\n'
#define setprecision(x) sp(x)
#define all(x) x.begin(),x.end()
const lli mod = 1e7 + 7;
//SORT ONE ARRAY WRT ANOTHER ARRAY
//void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}
lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
//string s = bitset<20>(x).to_string();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n,k;
      cin>>n;
      vlli a,b;
      loop(i,0,n-1)
      {
          lli x;
          cin>>x;
          a.pb(x);
      }
      loop(i,0,n-1)
      {
          lli x;
          cin>>x;
          b.pb(x);
      }
      lli s=0;lli t=0;
      sort(a.begin(),a.end());
      sort(all(b));
      for(int i=0;i<a.size();i++)
      {
          s+=(a[i])/n;a[i]%=n;
      }
      for(int i=0;i<b.size();i++)
      {
          s+=(b[i])/n;b[i]%=n;
      }
      //lli a=0,b=n-1;
      sort(a.begin(),a.end());
      sort(all(b));
      loop(i,0,n-1)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
      loop(i,0,n-1)
      {
        cout<<b[i]<<" ";
      }
      cout<<endl;
      cout<<s<<endl;
      bloop(i,n-1,0)
      {
        if(binary_search(all(a),n-b[i]))
        {
            s++;
            a.erase(lower_bound(all(a),n-b[i]));
        }
        // else{
        //     s++;
        //     v.erase(upper_bound(all(v),n-v[i]));
        // }
      }
      //if(t<=k){t=0;}
      cout<<s<<endl;
    }
   return 0;
}