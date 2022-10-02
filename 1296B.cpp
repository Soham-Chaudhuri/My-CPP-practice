#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;int max=s;
        while((s/10)>0)
        {
            int x=s/10;
           // cout<<x<<endl;
            int r=s%10;
            //cout<<r<<endl;
            s=x+r;
            //cout<<s<<endl;

            max+=x;
        }
        cout<<max<<endl;
    }
    return 0;
}