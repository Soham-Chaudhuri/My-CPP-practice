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
      ull a1,a2,a3;
      ull b1,b2,b3;
      cin>>a1>>a2>>a3;
      cin>>b1>>b2>>b3;
      ull A=a1+a2+a3;
      ull B=b1+b2+b3;
      if(A>B)
      {
          cout<<"DRAGON"<<endl;
      }
      else if(B>A)
      {
          cout<<"SLOTH"<<endl;
      }
      else
      {
          if(a1>b1)
      {
          cout<<"DRAGON"<<endl;
      }
      else if(b1>a1)
      {
          cout<<"SLOTH"<<endl;
      }
      else
      {
          if(a2>b2)
      {
          cout<<"DRAGON"<<endl;
      }
      else if(b2>a2)
      {
          cout<<"SLOTH"<<endl;
      }
      else
      {
          if(a3>b3)
      {
          cout<<"DRAGON"<<endl;
      }
      else if(b3>a3)
      {
          cout<<"SLOTH"<<endl;
      }
      else
      {
          cout<<"TIE"<<endl;
      }
      }
      }
      }
    }
   return 0;
}