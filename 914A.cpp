#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int p=INT_MIN;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=0){
        float t;
        t=sqrt(v[i]);
        float frac,intpr;
        frac=modf(t,&intpr);
        if(frac>0.0)
        {
            p=v[i];
            break;
        }
        
        }
        else{
            p=max(p,v[i]);break;
        }
     
    }
    cout<<p<<endl;
    
    return 0;
}