#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll A1,A2,B1,B2,C1,C2;
        cin>>A1>>A2;
        cin>>B1>>B2;
        cin>>C1>>C2;
        cout<<max(max(A1+A2,B1+B2),C1+C2)<<endl;
    }
    return 0;
}