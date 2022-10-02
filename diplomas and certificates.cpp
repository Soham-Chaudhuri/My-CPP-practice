#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int d,c;
    long long int w;
    d=n/(2*(k+1));
    c=(k*d);
    if(((c+d)>n/2)||(k>n))
    {
        c=0;d=0;
        cout<<c<<" "<<d<<" "<<(n-c-d);
    }
    else
    {
        cout<<d<<" "<<c<<" "<<(n-c-d);
    }
    return 0;
}