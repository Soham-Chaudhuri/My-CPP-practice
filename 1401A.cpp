#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(n>k)
        {
            ans=(n-k)%2;
        }
        else if(n<k){
            ans=k-n;

        }
        cout<<ans<<endl;
    }
    return 0;
}