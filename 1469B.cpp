#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<sstream>
#include<algorithm>
#include<random>
#include<queue>
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
#define setprecision(x) sp(x)
const ll mod = 1e7 + 7;
//SORT ONE ARRAY WRT ANOTHER ARRAY
//void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n;
      cin>>n;
      lli r[n];
      loop(i,0,n-1)
      {
          cin>>r[i];
      }
      lli m;
      cin>>m;
      lli b[m];
      loop(i,0,m-1)
      {
          cin>>b[i];
      }
      lli a[n+m];
      lli s1[n]={0};
      lli s2[m]={0};
      lli x,y;
      s1[0]=r[0];
      lli max1=s1[0];
      
      loop(i,1,n-1)
      {
          s1[i]+=r[i]+s1[i-1];
          if(s1[i]>max1)
          {
              max1=max(max1,s1[i]);
          }
          //cout<<s1[i]<<endl;
      }
      s2[0]=b[0];
      lli max2=s2[0];
      loop(i,1,m-1)
      {
          s2[i]+=b[i]+s2[i-1];
          if(s2[i]>max2)
          {
              max2=max(max2,s2[i]);
          }
          //cout<<s2[i]<<endl;
      }
      //cout<<max1<<"  "<<max2<<endl;
      cout<<max4(0ll,(max1+max2),max1,max2)<<endl;
      

    }
   return 0;
}