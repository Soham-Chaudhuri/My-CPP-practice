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
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t;cin>>t;while(t--)
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      lli n,m;
      cin>>n>>m;
      lli i1,j1,i2,j2;
      cin>>i1>>j1;
      cin>>i2>>j2;
      i1--;i2--;j1--;j2--;
      lli a[n][m];
      a[0][0]=1;
      lli c=2;
      map<int,int> mpp;
      loop(i,0,n-1)
      {
          loop(j,0,m-1)
          {
              if(i>0||j>0)
              {
                  if(c==1)
                  {
                      c==2;
                      a[i][j]=c;
                  }
                  else
                  {
                      c==1;
                      a[i][j]=c;
                  }
              }
          }
      }
      loop(i,1,5)
      {
          mpp[i]=0;
      }
      a[i1][j1]=1;
      a[i2][j2]=2;
    //   loop(i,0,n-1)
    //   {
    //       loop(j,0,m-1)
    //       {
    //           cout<<a[i][j]<<" ";
    //       }
    //       cout<<endl;
    //   }
      loop(i,0,n-1)
      {
          loop(j,0,m-1)
          {
              if(a[i][j]==a[i][j+1]||a[i][j]==a[i][j-1]||a[i][j]==a[i+1][j]||a[i][j]==a[i-1][j])
              {
                  if((j+1<m)&&(j-1>-1)&&(i+1<n)&&(i-1>-1))
                  {mpp[a[i][j+1]]=1;
                  
                  mpp[a[i][j-1]]=1;
                  
                  mpp[a[i+1][j]]=1;
                  
                  mpp[a[i-1][j]]=1;
                  if(mpp[1]==0)
                  {
                      a[i][j]=1;
                      mpp[1]=0;
                      mpp[2]=0;
                      mpp[3]=0;
                      mpp[4]=0;
                      mpp[5]=0;
                      continue;
                  }
                  else if(mpp[2]==0)
                  {
                      a[i][j]=2;
                      mpp[1]=0;
                      mpp[2]=0;
                      mpp[3]=0;
                      mpp[4]=0;
                      mpp[5]=0;
                      continue;
                  }
                  else if(mpp[3]==0)
                  {
                      a[i][j]=3;
                      mpp[1]=0;
                      mpp[2]=0;
                      mpp[3]=0;
                      mpp[4]=0;
                      mpp[5]=0;
                      continue;
                  }
                  else if(mpp[4]==0)
                  {
                      a[i][j]=4;
                      mpp[1]=0;
                      mpp[2]=0;
                      mpp[3]=0;
                      mpp[4]=0;
                      mpp[5]=0;
                      continue;
                  }
                  else if(mpp[5]==0)
                  {
                      a[i][j]=5;
                      mpp[1]=0;
                      mpp[2]=0;
                      mpp[3]=0;
                      mpp[4]=0;
                      mpp[5]=0;
                  }
              }
              }
          }
      }
      loop(i,0,n-1)
      {
          loop(j,0,m-1)
          {
              cout<<a[i][j]<<" ";
          }
          cout<<endl;
      }
    }
   return 0;
}