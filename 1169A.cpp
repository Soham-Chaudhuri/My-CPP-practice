#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int k=0;
    vector<int> v1;
    vector<int> v2;
    int i;
    if(a<=x)
    {
        for(i=a;i<=x;i++)
        {
            
            v1.push_back(i);
        }

    }
    else
    {
        for(i=a;i<=n;i++)
        {
            v1.push_back(i);
        }
        for(i=1;i<=x;i++)
        {
            v1.push_back(i);
        }
    }
    if(b>=y)
    {
        for(i=b;i>=y;i--)
        {
            
            v2.push_back(i);
        }

    }
    else
    {
        for(i=b;i>=1;i--)
        {
            v2.push_back(i);
        }
        for(i=n;i>=y;i--)
        {
           v2.push_back(i);
        }
    }
    int mins=min(v1.size(),v2.size());
    for(i=0;i<mins;i++)
    {
       
        if(v1[i]==v2[i])
        {
            k=1;break;
        }
    }
    
    if(k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }

    return 0;
}