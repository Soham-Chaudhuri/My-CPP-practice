#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<sstream>
#include<algorithm>
#include<random>
#include<queue>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<ll, ll> pll;
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
const ll mod = 1e7 + 7;
//SORT ONE ARRAY WRT ANOTHER ARRAY
//void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
vector<int> prime_factor(lli x)
{
    int t=2;vector<int> v1;
    while(x>1)
    {
        if(x%t==0)
        {
            v1.pb(t);
            x/=t;
        }
        else if(t==2||t==3)
        {
            t++;
        }
        else if(t!=2&&t!=3)
        {
            v1.pb(-1);
            break;
        }
    }
    return v1;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      ull n,m;
      cin>>n>>m;
      if(m==n)
      {
          cout<<0<<endl;
      }
      else if(m%n!=0)
      {
          cout<<-1<<endl;
      }
      else
      {
          vector<int> v;int p=0;
          v=prime_factor(m/n);
          loop(i,0,v.size()-1)
          {
              if(v[i]==-1)
              {
                  p=1;
                  break;
              }
          }
          if(p==0)
          {
              cout<<v.size()<<endl;
          }
          else
          {
              cout<<-1<<endl;
          }
      }

    }
   return 0;
}