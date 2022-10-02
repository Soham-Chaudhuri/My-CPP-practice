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
void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      ull n;
      cin>>n;
      ull a[n];
      loop(i,0,n-1)
      {
        cin>>a[i];
      }
      lli c0=0,c1=0,c2=0;
      lli k=n/3;
      loop(i,0,n-1)
      {
        if(a[i]%3==0)
        {
          c0++;
        }
        if(a[i]%3==1)
        {
          c1++;
        }
        if(a[i]%3==2)
        {
          c2++;
        }
      }
      lli ans=0;
      while(c0!=k||c1!=k||c2!=k)
      {
        if(c0>k)
        {
          lli x=c0-k;
          c0=c0-x;
          c1=c1+x;
          ans+=x;
        }
        else if(c1>k)
        {
          lli x=c1-k;
          c1=c1-x;
          c2=c2+x;
          ans+=x;
        }
        else if(c2>k)
        {
          lli x=c2-k;
          c2=c2-x;
          c0=c0+x;
          ans+=x;
        }

      }
      cout<<ans<<endl;
      
    }
   return 0;
}   