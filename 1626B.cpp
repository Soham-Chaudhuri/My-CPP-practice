#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      string s;
      cin>>s;
      ull maxs=0;
      lli l=s.length();
      int k;
      ull a[l];
      a[0]=0;
      loop(i,1,l-1)
      {
          ull x,y;
          x=s[i]-'0';
          y=s[i-1]-'0';
        a[i]=x+y;
      }
      loop(i,1,l-1)
      {
          if(a[i]>maxs)
          {
              maxs=max(maxs,a[i]);
              k=i;
          }
      }
      int i=0;
      while(i<l)
      {
          if(i==k-1)
          {
              cout<<maxs;
              i+=2;
          }
          else{
              cout<<s[i];
              i++;
          }
      }
      cout<<endl;
        
    }
   return 0;
}