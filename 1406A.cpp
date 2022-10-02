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
      ull n;
      cin>>n;
      ull a[n];
      ull count[101]={0};
      vi a1,a2;
      loop(i,0,n-1)
      {
          cin>>a[i];cout<<a[i]<<endl;
          count[a[i]]++;
      }
      loop(i,0,n-1)
      {
          cout<<a[i]<<endl;
          cout<<count[i]<<endl;
      }
      loop(i,0,n-1)
      {
          if(count[i]>=1)
          {
              a1.pb(i);
          }
          if(count[i]==0)
          {
              break;
          }
          count[i]--;
      }
      int k;
      loop(i,0,n-1)
      {
          if(count[i]==0)
          {
            k=i;   
          }
      }
      cout<<a1[a1.size()-1]+1+k<<endl;
      
      
    }
   return 0;
}