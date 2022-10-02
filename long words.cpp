#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l;string str="";
    int t;
    while(t--)
    {
    cin>>s;
    l=s.size();
    if(l>10)
    {
       i=l-2;
       cout<<s.substr(0,0)<<i<<s.substr(l-1.l-1)<<endl; 
    }
    else
    {
        cout<<s<<endl;
    }
    }
    return 0;
}