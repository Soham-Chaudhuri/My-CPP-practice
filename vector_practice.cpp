#include<bits/stdc++.h>
using namespace std;
//SHIFT OF A PART OF AN ARRAY USING VECTOR
/*int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<k;i++)
        {
            v.push_back(v[i]);
            
        }
        v.erase(v.begin(),v.begin()+k);

        for(auto element : v)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//REVERSE OF AN ARRAY USING VECTOR
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;int x;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        vector<int> :: iterator it;
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
    }
    return 0;
}