#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
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
const ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      //YOUR CODE GOES HERE
      ll n;
      cin>>n;
      ll a[n+2];
      loop(i,1,n)
      {
          cin>>a[i];
      }
      a[0]=inf;a[n+1]=inf;
      ll maxs=ninf;ll maxi;
      ll mins=inf;ll mini;
      loop(i,1,n)
      {
          if(a[i]>=maxs && (a[i]>a[i-1] || a[i]>a[i+1]))
          {
              maxs=max(maxs,a[i]);//cout<<a[i]<<endl;
              maxi=i;
          }
          if(a[i]<mins)
          {
              mins=min(mins,a[i]);//cout<<a[i]<<endl;
              mini=i;
          }
      }
      if(mins!=maxs && maxs!=ninf)
      {
          cout<<(maxi)<<endl;
      }
      else
      {
          cout<<"-1"<<endl;
      }
    }
   return 0;
}