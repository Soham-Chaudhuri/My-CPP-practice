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
      lli n,r,b;
      cin>>n>>r>>b;
      string ans="";
      if(r==1)
      {
        loop(i,1,b/2)
        {
            ans+="B";
        }
        ans+="R";
        loop(i,1,b-(b/2))
        {
            ans+="B";
        }
      }
      else if(b==1&&r!=1)
      {
        loop(i,1,r/2)
        {
            ans+="R";
        }
        ans+="B";
        loop(i,1,r-(r/2))
        {
            ans+="R";
        }
      }
      else
      {
        // string a;lli x=max(1ll,b/r);lli y=max(1ll,r/b);
        // loop(i,1,x)
        // {
        //     a+='B';
        // }
        // loop(i,1,y)
        // {
        //     a+="R";
        // }
        // if(r>b)
        // {
        //     reverse(all(a));
        // }
        // while(b>0&&r>0)
        // {
        //     ans+=a;
        //     r-=y;
        //     b-=x;
        // }
        // while(b>0)
        // {
        //     ans+="B";
        //     b--;

        // }
        // while(r>0)
        // {
        //     ans+="R";r--;
        // }
        char c1,c2;lli x1,x2,y1,y2;
        if(r>b)
        {
            c1='R';
            c2='B';
            x1=max(r,b);
            y1=min(r,b);
            x2=max(r,b);
            y2=min(r,b);
        }
        else
        {
            c2='R';
            c1='B';
            x1=max(r,b);
            y1=min(r,b);
            x2=max(r,b);
            y2=min(r,b);
        }
        string a="";
        lli t=0;
        loop(i,1,x1/(y1+1))
        {
            a+=c1;t++;            
        }
        
        vector<string> ans1((y1+1),a);x2-=t*(y1+1);
        lli j=0;
        bloop(i,x2,1)
        {
            ans1[j]+=c1;j++;
        }
        j=0;
        loop(i,1,y2)
        {
            ans1[j]+=c2;j++;
        }
        loop(i,0,ans1.size()-1)
        {
            ans+=ans1[i];
        }
        
      }
      cout<<ans<<endl;
    }
   return 0;
}