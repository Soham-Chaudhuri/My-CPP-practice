#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        int a[101]={0};
        
        int i;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(abs(x));
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            a[v[i]]++;
        }
        for(i=0;i<101;i++)
        {
            if(i!=0)
                {
                    ans+=min(2,a[i]);//cout<<"YO"<<i<<endl;
                }
            else
            {
                
                ans+=min(1,a[0]);
            }
            
        }
        
        
        cout<<ans<<endl;
        
    }
    return 0;
}