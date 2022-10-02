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
string remdup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string s1=remdup(s.substr(1));
    if(ch==s1[0])
    {
        return s1;
    }
    return (ch+s1);
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED   ||s[i]=='e'||s[i]=='l'||s[i]=='o'
      string s,str="";
      cin>>s;
      int k=0;
      loop(i,0,s.length()-1)
      {
          if(s[i]=='h' && k==0)
          {
              str+=s[i];k++;
          }
          else if(s[i]=='e'&& k==1)
          {
              str+=s[i];k++;
          }
          else if(s[i]=='l'&& k==2)
          {
              str+=s[i];k++;
          }
          else if(s[i]=='l'&& k==3)
          {
              str+=s[i];k++;
          }
          else if(s[i]=='o'&& k==4)
          {
              str+=s[i];k++;
          }

      }
      //s=remdup(str);
      //cout<<s<<" "<<str<<endl;
      if(k==5)
      {
          cout<<"YES"<<endl;

      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
   return 0;
}