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
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      ull a[1001];
      ull b[1001];
      ull c[1001];
      loop(i,0,1000)
      {
          a[i]=3+(i*3);
          b[i]=5+(i*3);
          c[i]=7+(i*3);
      }
      ull n;
      cin>>n;
      ull indx,j=0;
      loop(i,0,1000)
      {
          if(a[i]==n)
          {
              indx=i;
              j=1;
              break;
          }
          if(b[i]==n)
          {
              indx=i;
              j=2;
              break;
          }
          if(c[i]==n)
          {
              indx=i;
              j=3;
              break;
          }
          if(n==4 || n==2 || n==1)
          {
              j=-1;
              break;
          }

      }
      if(j==1)
      {
          cout<<(indx+1)<<" 0 "<<"0"<<endl;
      }
      else if(j==2)
      {
          cout<<indx<<" 1 "<<"0"<<endl;
      }
      else if(j==3)
      {
          cout<<indx<<" 0 "<<"1"<<endl;
      }
      else
      {
          cout<<"-1"<<endl;
      }

    }
   return 0;
}