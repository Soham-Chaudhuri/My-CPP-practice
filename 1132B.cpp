#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    vector<int> v1;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    int m;
    cin>>m;
    vector <int> v2;
    for(i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        s+=v1[i];
    }
    for(i=0;i<m;i++)
    {
        int ans=s-v1[v2[i]-1];
        cout<<ans<<endl;
    }



    return 0;
}