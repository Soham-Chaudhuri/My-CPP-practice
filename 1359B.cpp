#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include <sstream>
#include <algorithm>
#include <random>
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
const ll mod = 1e9 + 7;
void pairsort(int a[], char b[], int n)
{
    pair<int, char> pairt[n];
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED 
      ull n,m,x,y;
      cin>>n>>m>>x>>y;
      ull tt=0;
      ull ot=0;ull ans;
      vector<string> v;
      loop(i,0,n-1)
      {
          string s;
          cin>>s;
          v.pb(s);
      }
      loop(i,0,n-1)
      {
          while(v[i].find("..")<v[i].length())
          
          {
              tt++;
              v[i].replace(v[i].find(".."),2,("**"));
          }
      }
      loop(i,0,n-1)
      {
          while(v[i].find(".")<v[i].length())
          
          {
              ot++;
              v[i].replace(v[i].find("."),1,("*"));
          }
      }
      //cout<<tt<<" "<<ot<<endl;
      if(ot==0)
      {
          ans=min(tt*y,(tt*2+ot)*x);
      }
      else
      {
          ans=min((tt*2+ot)*x,(tt*y)+(ot*x));
      }
      
      cout<<ans<<endl;
      /*
      loop(i,0,n-1)
      {
          cout<<v[i]<<endl;
      }
      */
    }
   return 0;
}