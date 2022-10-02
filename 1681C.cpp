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
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n;
      cin>>n;
      vlli v1,v2;
      vlli as1,as2;
      map<lli,lli> mp1,mp2;
      loop(i,0,n-1)
      {
          lli x;
          cin>>x;
          v1.pb(x);as1.pb(x);mp1[x]=i;
      }
      loop(i,0,n-1)
      {
          lli x;
          cin>>x;
          v2.pb(x);as2.pb(x);mp2[x]=i;
      }
      sort(as1.begin(),as1.end());
      sort(as2.begin(),as2.end());
      vector<plli> p;
      lli t=0;lli f=0;
      loop(i,0,n-2)
      {
          if((v1[i]>v1[i+1])||(v2[i]>v2[i+1]))
          {
              f=-2;
              break;
          }
      }
      loop(i,0,as1.size()-1)
      {
          if(mp1[as1[i]]==mp2[as2[i]])
          {
              p[0].first=mp1[as1[i]]+1;
              p[0].second=t+1;
              lli x=mp1[v1[t]];
              mp1[v1[t]]=mp1[as1[i]];
              mp1[as1[i]]=x;
              x=mp2[v2[t]];
              mp2[v2[t]]=mp2[as2[i]];
              mp2[as2[i]]=x;
              t++;
          }
          else
          {
              f=-1;
              break;
          }
      }
      if(f==0)
      {
          loop(i,0,p.size()-1)
          {
              cout<<p[i].first<<" "<<p[i].second<<endl;
          }
      }
      else if(f=-1)
      {
          cout<<-1<<endl;
      }
      else
      {
          cout<<0<<endl;
      }
    }
   return 0;
}




/*
int i, j;
    for (i = 0; i < n - 1; i++)
        {for (j = 0; j < n - i - 1; j++)
            {if (arr[j] > arr[j + 1])
                {swap(arr[j], arr[j + 1]);}}}
*/