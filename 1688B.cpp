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
int minOperations(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    int moves = 0;
    while (s.empty() == 0) {
        int z = *(s.rbegin());
        if (z % 2 == 0) {
            moves++;
            s.insert(z / 2);
        }
        s.erase(z);
    }
    return moves;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n;
      cin>>n;
      vlli v;lli e=0;lli o=0;lli se=0;lli j=0;lli mind=mod;
      loop(i,0,n-1)
      {
          lli x;
          cin>>x;
          if(x&1)
          {
              o++;
          }
          else
          {
              if((x/2)&1)
              {
                  se++;
                  o++;
              }
              else
              {
                  lli k=0;
                  while((x&1)==0)
                  {
                      x=x/2;
                      k++;
                  }
              
              mind=min(mind,k);
              j++;
              }
          }
      }
      if(o)
      {
          cout<<se+j<<endl;
      }
      else
      {
          cout<<mind+j-1<<endl;
      }
    //   loop(i,0,n-1)
    //   {
    //       lli x;
    //       cin>>x;
    //       v.pb(x);
    //       if(x%2==0)
    //       {
    //           e++;se+=x;
    //       }
    //       else
    //       {
    //           o++;
    //       }
    //   }
    //   if(o>0)
    //   {
    //       cout<<e<<endl;
    //   }
    //   else
    //   {
    //       e=e-1;
    //       while(se%2==0)
    //       {
    //           e++;
    //           se/=2;
    //       }
    //       cout<<e<<endl;
    //   }
    }
   return 0;
}