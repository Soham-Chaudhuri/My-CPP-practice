#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;bool p=false;
        if(n%2!=0){
            p=true;
        }
        else{
        for(long long int i=3;i<=n;i+=2)
        {
            if(n%i==0)
            {
                p=true;
                break;
            }
        }
        }
        if(p)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}