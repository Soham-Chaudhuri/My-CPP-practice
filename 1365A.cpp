#include<bits/stdc++.h>
using namespace std;

#define int long long


void solve(){
    //"Ashish"  "Vivek"
    int n,m; cin>>n>>m;
    
    set<int> iset,jset;
    int k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>k;
            if(k==1){
                iset.insert(i);
                jset.insert(j);
            }
        }
    }
    n-=iset.size();
    m-=jset.size();

    int ans=min(n,m);

    if(ans&1) cout<< "Ashish" <<endl;
    else cout<< "Vivek" <<endl;

    
    

}

int32_t main(){
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}