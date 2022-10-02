#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        
        vector<char> v;
        int i;int k;
        for(i=0;i<l;i++)
        {
            v.push_back(s[i]);
        }
        if(v[0]==v[l-1])
        {
            k=1;
        }
        else{
            if(v[0]==v[(l-1)/2])
            {
                v[l-1]=v[0];
            }
            else
            {
                v[0]=v[l-1];
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        /*
        while(l1--){
            int sab=0;
            int sba=0;
            string sub;
            //cout<<l1<<endl;
        for(i=0;i<l-1;i++)
        {
            sub=s.substr(i,2);
            if(sub=="ba")
            {
                sba++;
            }
            else if(sub=="ab")
            {
                sab++;
            }
        }
        if(sba>sab)
        {
            for(i=0;i<l-1;i++)
            {
                sub=s.substr(i,2);
                if(sub=="ba")
                {
                    break;
                }
            }
            ans=s.substr(0,i)+"bb"+s.substr(i+2);
        }
        else if(sab>sba)
        {
            for(i=0;i<l-1;i++)
            {
                sub=s.substr(i,2);
                if(sub=="ab")
                {
                    break;
                }
            }
            ans=s.substr(0,i)+"bb"+s.substr(i+2);
        }
        else
        {
            ans=s;
        }
        s=ans;
        }
        cout<<ans<<endl;
        */
    }
    return 0;
}