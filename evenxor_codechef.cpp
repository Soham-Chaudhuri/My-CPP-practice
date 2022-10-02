#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
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
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

lli bin(long n)
  {
    long i;
    vector<int> a;
    //cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
      {
        a.pb(1);
      }
      else
      {
        a.pb(0);
      }
    }
    lli s=0;
    loop(i,0,a.size()-1)
      {
          if(a[i]==1)
          {
              s++;
          }
          
      }
    return s;
  }


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
      /*
        
      loop(i,0,y.size()-1)
      {
          cout<<y[i]<<" ";
      }
      */
      int n;
      cin>>n;
      vector<int> x;
      vector<int> y;
      //cout<<bin(n);
      //cout<<"YO"<<endl;
      int i=3;
      int j=0;
      do
      {
          if(bin(i)%2==0)
          {
              cout<<i<<" ";
              j++;
          }
          i++;
      }while(j<n);
      cout<<endl;
      
      
    }
    
   return 0;
}