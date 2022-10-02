#include <bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define pop pop_back
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define iot(n) for(int i=0;i<n;i++)
#define jot(n) for(int j=0;j<n;j++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define inf 9999999999999
#define endl '\n'
const ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
 
 
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   ll b[n+1];
   iot(n+1) b[i] = 0;
   iot(n){
       cin>>a[i];
       while(a[i]>n){
           a[i]/=2;
       }
   }
   //sort(a,a+n);
   iot(n){
       ll k = a[n-i-1];
       while(k!=0 && b[k]==1){
           k/=2;
       }
       if(k == 0){
           cout<<"NO"<<endl;
           return;
       }
       b[k] = 1;
   }
   iot(n){
       if(b[i+1] == 0){
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
}
int main() {
	// your code goes here
	fio;
	ll t ;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}