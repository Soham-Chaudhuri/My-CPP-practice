#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ok=1;
        if(n!=2*k || k==0){
            for(int i=0;i<k;i++)
            {
                if(s[i]!=s[n-1-i])
                {
                    ok=0;break;
                }
            }
        if(ok || k==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}