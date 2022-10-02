#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;int t;t=x;
        vector<int> v;
        for(int i=9;i>=1;i--)
        {
            
            if(x-i>=0 && t<=45){
                x=x-i;
                v.push_back(i);
            }
            else if(t>45)
            {
                t=(-1);
                break;
            }
            
        }
        reverse(v.begin(),v.end());
        if(t!=-1){
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        }
        else{
            cout<<t<<endl;
        }
    }
    
    return 0;
}