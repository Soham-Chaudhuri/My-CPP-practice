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




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      ull n;
      cin>>n;
      vector<string> s;
      string s1;
      cin>>s1;
      string s2;
      s.pb(s1);
      loop(i,1,n-1)
      {
          string x;
          cin>>x;
          s.pb(x);
          if(s[0]!=x)
          {
              s2=x;
          }
          //cout<<s[i]<<endl;
      }
      ull a[2]={0};
      loop(i,0,n-1)
      {
          if(s[i]==s1)
          {
              a[0]++;
          }
          else
          {
              a[1]++;
          }
      }
      //cout<<a[0]<<" "<<a[1]<<endl;//cout<<s[0]<<" "<<s[1]<<endl;
      //cout<<s1<<" "<<s2<<endl;
      if(a[0]>a[1])
      {
          cout<<s1<<endl;
      }
      else
      {
          cout<<s2<<endl;
      }
    }
   return 0;
}