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
#define loop(i,a,b) for(int i=a;i<=b;++i)
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
const lli mod = 1e7 + 7;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n,m;
      cin>>n>>m;
      //lli a[n][m];
      lli maxa=LONG_LONG_MIN;lli x,y;lli z;
      loop(i,0,n-1)
      {
        loop(j,0,m-1)
        {
            cin>>z;
            if(z>maxa)
            {
                y=i;
                x=j;
                maxa=z;
            }
        }
      }
     
      lli ans=max(y+1,n-y)*max(x+1,m-x);
      cout<<ans<<endl;
    }
   return 0;
}