#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ull a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;;
    }
    return 0;
}