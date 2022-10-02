#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ull n,x;
        cin>>n>>x;
        vector<ull> v;
        for(ull i=0;i<n;i++)
        {
            ull x;
            cin>>x;
            v.push_back(x);
        }
        
        //sort(v.begin(),v.end());
        vector<ull> v1;
        ull sum=0;
        for(ull i=0;i<n;i++)
        {
            if(v[i]%x==0)
            {
                v1.push_back(v[i]);//cout<<"YO"<<endl;
            }
            else
            {
                sum+=v[i];//cout<<"YO"<<endl;
            }
        }
        //cout<<sum<<endl;
        v1.push_back(sum);
        sum=0;
        ull sum2=0;
        for(ull i=0;i<v.size();i++)
        {
            
            sum+=floor(v[i]/x);
            if(v[i]%x!=0)
            {
                sum++;
            }
            //cout<<sum<<endl;
        }
        for(ull i=0;i<v1.size();i++)
        {
            
            sum2+=floor(v1[i]/x);
            if(v1[i]%x!=0)
            {
                sum2++;
            }
            //cout<<sum2<<endl;
        }
        cout<<sum2<<" "<<sum<<endl;


    }
    return 0;
}