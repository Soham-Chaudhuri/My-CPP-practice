#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<vector<lli>> vvlli;
typedef vector<lli> vlli;
typedef vector<ull> vull;
typedef pair<lli, lli> plli;
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
const lli mod = 1e7 + 7;
//SORT ONE ARRAY WRT ANOTHER ARRAY
//void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}
lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
//SIEVE OF EROSTHENES
//bool sieve[mod];
//void sieve_of_erosthenes(){loop(i,2,mod){sieve[i]=false;}for(int i=2;i*i<=mod-1;i++){if(sieve[i]==false){for(int j=i*i;j<=mod-1;j+=i){sieve[j]=true;}}}}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n;
      cin>>n;
      vector<int> v;
      loop(i,0,n-1)
      {
          char h;
          cin>>h;
          v.pb(h);
      }
      int f=v[0];
int c=1;
vector<int>v1;
for(int i=1;i<n;i++)
{
  if(v[i]==f)
  {
    c++;
 
  }
  else
  {
    v1.pb(c);
    f=v[i];
    c=1;
  }
 
 
}
 
v1.pb(c);
 
lli k;//=v1[0];
vector<int>v2;
for(int i=1;i<v1.size();i++)
  {
    v2.pb(min(v1[i],v1[i-1]));
 
  }
  sort(v2.begin(),v2.end());
  
  cout<<v2[v2.size()-1]*2;
 
    //  vlli v1;string s1="";vlli v2;
    //  if(s[n-1]=='2')
    //  {
    //      s.pb('1');
    //  }
    //  else
    //  {
    //      s.pb('2');
    //  }
    //  //cout<<s<<endl;
    //   loop(i,0,n-1)
    //   {
    //       if(s[i]==s[i+1])
    //       {
    //           s1+=s[i];
    //       }
    //       else
    //       {
    //           s1+=s[i];
    //           if(s1[0]=='1')
    //           {
    //               v1.pb(s1.length());
    //           }
    //           else
    //           {
    //               v2.pb(s1.length());
    //           }
    //           s1="";
    //       }
    //   }
    //   lli mx1=*min_element(v1.begin(),v1.end());
    //   lli mx2=*min_element(v2.begin(),v2.end());
    //   cout<<2*max(mx1,mx2)<<endl;
    }
   return 0;
}