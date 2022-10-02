#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int a,b;
    if(rd>=rb)
    {
        a=rd-rb;
    }
    else{
        a=(2*(n-rb))+(rb-rd);
    }
    if(cd>=cb)
    {
        b=cd-cb;
    }
    else{
        b=(2*(m-cb))+(cb-cd);

    }
    int p=min(a,b);
    
    
    
    cout<<p<<endl;
    
    
    }
    return 0;
}