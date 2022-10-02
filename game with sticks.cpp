#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int t=n*m;int p=1;
    while(t>0)
    {
        n=n-1;
        m=m-1;
        t=n*m;
        p=p*(-1);
    }
    if(p==-1)
    {
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }
    return 0;
}