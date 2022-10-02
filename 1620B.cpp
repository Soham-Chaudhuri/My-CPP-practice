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
#define all(x) (x.begin(),x.end())
#define pno cout<<"NO"<<endl;
#define py cout<<"YES"<<endl;
#define pdd pair<double, double>
const lli mod = 1e7 + 7;

//Input vector
void inall(vlli &v,lli n)
{
    loop(i,0,n-1)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
}

//Binary_Search
bool possible(){}

lli bs(lli l,lli u,lli x)
{
    lli ans=0;
    while(l<=u)
    {
        lli mid=(l+u)/2;
        if(possible())
        {
            ans=mid;
            //
        }
        else
        {
            //
        }
    }
    return ans;
}


//SORT ONE ARRAY WRT ANOTHER ARRAY

void pairsort(lli a[], char b[], lli n)
{
    pair<int, char> pairt[n];
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

lli gcd(lli a, lli b) { if (b == 0) return a; return gcd(b, a % b);}

lli pwr(lli a, lli b) {a %= mod; lli res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

lli lcm(lli a, lli b){return (a / gcd(a, b)) * b;}

//Sieve of erosthenes
lli prime[mod];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 
//string s = bitset<20>(x).to_string();
//bitset <20> b(x);x=50 or x="110010"
//lli y=b.to_ulong();
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli w,h;
      cin>>w>>h;
      vector<pii> p1;
      lli a,b,c,d;lli m1,m2,m3,m4;
      cin>>a;
      loop(i,0,a-1)
      {
        lli x;
        cin>>x;
        p1.pb(make_pair(x,0));
      }
      m1=p1[a-1].first-p1[0].first;
      cin>>b;
      loop(i,0,b-1)
      {
        lli x;
        cin>>x;
        p1.pb(make_pair(x,h));
      }m2=p1[a+b-1].first-p1[a].first;
      cin>>c;
      loop(i,0,c-1)
      {
        lli x;
        cin>>x;
        p1.pb(make_pair(0,x));
      }m3=p1[a+b+c-1].second-p1[a+b].second;
      cin>>d;
      loop(i,0,d-1)
      {
        lli x;
        cin>>x;
        p1.pb(make_pair(h,x));
      }
      m4=p1[a+b+c+d-1].second-p1[a+b+c].second;
    //   loop(i,0,p1.size()-1)
    //   {
    //     cout<<"("<<p1[i].first<<","<<p1[i].second<<")"<<endl;
    //   }
      lli maxt=max4(m1*h,m2*h,m3*w,m4*w);double ans=0.0;
      
      cout<<maxt<<endl;

    }
   return 0;
}