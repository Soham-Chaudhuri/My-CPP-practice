#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool p=false;
        while((n>2020)&&(n%2020!=0))
        {
            n-=2021;
        }
        if(n%2020==0)
        {
            p=true;
        }
        if(p)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}