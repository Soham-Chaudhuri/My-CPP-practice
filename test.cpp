#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ex,b,op;
    cin>>ex>>b;
    op=min(b%ex,ex-b%ex);
    cout<<op<<endl;
    return 0;
}