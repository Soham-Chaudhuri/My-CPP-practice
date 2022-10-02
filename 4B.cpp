#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int lli;
typedef vector<lli> vlli;
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define endl '\n'
#define pno cout<<"NO"<<endl;
#define py cout<<"YES"<<endl;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n;
      cin>>n;
      lli s;
      cin>>s;lli t=s;
      vlli a,b;lli s1=0;lli s2=0;vlli ans;
      loop(i,0,n-1)
      {
        lli x,y;
        cin>>x>>y;
        a.pb(x);b.pb(y);t-=x;
        s1+=x;s2+=y;ans.pb(x);
      }
      if(s>=s1&&s<=s2)
      {
        py;
        loop(i,0,n-1)

         {
            if(t>0)
            {
                ans[i]+=min(b[i]-a[i],t);
                t-=(b[i]-a[i]);
            }
        }
        loop(i,0,n-1)
        {
            cout<<ans[i]<<" ";
        }
      }
      else
      {
        pno;
      }
      cout<<endl;
    }
   return 0;
}