#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long int lli;
typedef long long ll;   
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

int main(){   
 ios_base::sync_with_stdio(0);   
 cin.tie(0);   
 int t = 1;   
 cin >> t;   
 while(t--){   
        int n; 
        cin >> n; 
        vector <ll> a(n); 
        loop(i,0,n-1) cin >> a[i]; 
        ll neg = 0, pos = 0; 
            loop(i,0,n-1) 
            { 
                if (a[i] < 0) 
                { 
                    neg++; 
                } 
                else if (a[i] > 0) 
                { 
                    pos++; 
                } 
            } 
        if (n > 5)  
        { 
            if ((neg == 0 && pos == 0)||  (neg == 0 && pos == 1)  ||(pos == 0 && neg == 1)) 
            { 
                py; 
            } 
            else if (neg == 1 && pos == 1)  
            { 
                if (abs(a[0]) == abs(a[n-1])) 
                { 
                    py; 
                } 
                else 
                { 
                    pno; 
                } 
            } 
            else 
            { 
                pno; 
            } 
        } 
        else 
        { 
            if (n == 3) 
            { 
                if ((neg == 0 && pos == 0)||  (neg == 0 && pos == 1)  ||(pos == 0 && neg == 1)) 
                { 
                    py; 
                } 
                else if (neg == 1 && pos == 1) 
                { 
                    if (abs(a[0]) == abs(a[2])) 
                    { 
                        py; 
                    } 
                    else 
                    { 
                        pno; 
                    } 
                } 
                else 
                { 
                   pno; 
                } 
            } 
            else if (n == 4)  
            { 
                if ((neg == 0 && pos == 0)||  (neg == 0 && pos == 1)  ||(pos == 0 && neg == 1)) 
                { 
                    py; 
                } 
                else if (neg == 1 && pos == 1)  
                { 
                    if (abs(a[0]) == abs(a[3])) 
                    { 
                        py; 
                    } 
                    else 
                    { 
                        pno;; 
                    } 
                } 
                else if (neg == 2 && pos == 2) 
                { 
                    if (abs(a[0]) == abs(a[1]) && abs(a[1]) == abs(a[2]) && abs(a[3]) == abs(a[2])) 
                    { 
                        py; 
                    } 
                    else 
                    { 
                        pno; 
                    } 
                } 
                else 
                { 
                    pno; 
                } 
            } 
            else 
            { 
                if ((neg == 0 && pos == 0)||  (neg == 0 && pos == 1)  ||(pos == 0 && neg == 1)) 
                { 
                    py; 
                } 
                else if (neg == 1 && pos == 1)  
                { 
                    if (abs(a[0]) == abs(a[4])) 
                    { 
                        py; 
                    } 
                    else 
                    { 
                        pno; 
                    } 
                } 
                else if (neg == 2 && pos == 2) 
                { 
                    if (abs(a[0]) == abs(a[1]) && abs(a[1]) == abs(a[3]) && abs(a[3]) == abs(a[4])) 
                    { 
                        py; 
                    } 
                    else 
                    { 
                        pno; 
                    } 
                } 
                else 
                { 
                    pno; 
                } 
            } 
        } 
    }   
 return 0;   
}