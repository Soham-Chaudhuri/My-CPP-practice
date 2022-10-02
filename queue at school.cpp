#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;char ch[n];
    cin>>s;
    int i;
    for(i=0;i<n;i++)
    {
        ch[i]=s.at(i);
    }
    s="";
    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if((ch[i]=='B')&&(ch[i+1]=='G'))
            {
                char c;
                c=ch[i];
                ch[i]=ch[i+1];
                ch[i+1]=c;
                i++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        s+=ch[i];
    }
    cout<<s;

    return 0;
}