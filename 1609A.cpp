#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int> v;
        int i;
        for(i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        long long int s=0;
        for(i=0;i<n;i++)
        {   
            if(v[i]%2==0)
            {
                s++;
                v[i]=v[i]/2;
            }
            if(v[i]%2==0)
            {
                i--;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        v[0]=v[0]*pow(2,s);
        s=0;
        for(i=0;i<n;i++)
        {
            s+=v[i];
        }
        cout<<s<<endl;
        
    }
    return 0;
}