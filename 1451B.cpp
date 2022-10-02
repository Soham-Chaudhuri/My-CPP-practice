#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int i;
        while(q--){
            int l, r; cin >> l >> r; --l; --r;
            bool bad = true;
            for(i = 0; i < l and bad; i++)
                if(s[i] == s[l]) bad = false;
            for(i = r+1; i < n and bad; i++)
                if(s[i] == s[r]) bad = false;
            cout << (bad? "NO" : "YES") << '\n';
        }

    }
    return 0;
}