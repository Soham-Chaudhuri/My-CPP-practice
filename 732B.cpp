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
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n,k;
      cin>>n>>k;
      lli a[n],b[n];
      lli s1=0,s2=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];s1+=a[i];
      }
      b[0]=a[0];
      s2+=b[0];
      loop(i,1,n-1)
      {
          //cout<<max(0ll,k-a[i]-a[i-1])<<endl;
          a[i]=a[i]+max(0ll,k-a[i]-a[i-1]);
          s2+=a[i];
      }
      if(s2>s1)
      {
          cout<<abs(s2-s1)<<endl;
      }
      else
      {
          cout<<"0"<<endl;
      }
          for(int i=0;i<n;i++)
          {
              cout<<a[i]<<" ";
          }
      
    }
   return 0;
}