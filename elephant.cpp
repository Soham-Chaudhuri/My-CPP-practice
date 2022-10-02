#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int s=0;
    s=t/5;
    if(t%5>0)
    {
        s+=1;
    }
    cout<<s;
    return 0;
}