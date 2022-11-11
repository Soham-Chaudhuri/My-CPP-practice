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
#define all(x) x.begin(),x.end()
#define pno cout<<"NO"<<endl;
#define py cout<<"YES"<<endl;
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
lli primes[mod];
void sieveOfEratosthenes(int N) {
   
   N+=2;
   primes[1] = 1;
   for (int i=2; i<N; i++)
      primes[i] = i;
   for (int i=4; i<N; i+=2)
      primes[i] = 2;
   for (int i=3; i*i<N; i++) {
      if (primes[i] == i) {
         for (int j=i*i; j<N; j+=i)
            if (primes[j]==j)
               primes[j] = i;
      }
   }
}
 
//string s = bitset<20>(x).to_string();
//bitset <20> b(x);x=50 or x="110010"
//lli y=b.to_ulong();

void f(){
    lli n;
    cin>>n;
    vlli v1,v2(32,-1);
    inall(v1,n);
    sieveOfEratosthenes(1000);
    map<lli,lli> mp;
    lli cnt=1;
    loop(i,0,n-1){
        if(v2[primes[v1[i]]]==-1)
        {v2[primes[v1[i]]]=cnt;
        cnt++;}
    }
    cout<<*max_element(all(v2))<<endl;
    loop(i,0,n-1){
        cout<<v2[primes[v1[i]]]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      f();
    }
   return 0;
}