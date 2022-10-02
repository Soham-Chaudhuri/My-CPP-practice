#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v;
        int i;
         
        int j;
        v.push_back(a);
       
        for(i=n;i>=1;i--)
        {
            
            if(i!=a && i!=b)
                {
                    
                    v.push_back(i);
                }
        }
        v.push_back(b);
        int maxs=INT_MIN;
        int mins=INT_MAX;
        for(i=(n/2);i<n;i++)
        {
            maxs=max(maxs,v[i]);
        }
        
        for(i=0;i<(n/2);i++)
        {
            mins=min(mins,v[i]);
        }
        //cout<<maxs<<" "<<mins<<endl;
        
        /*
        for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        */
        if(maxs==b && mins==a)
        {
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        

    }
    return 0;
}