#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        int i;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        int x=v[n-1];
        int k=0;
        for(i=n-2;i>=0;i--)
        {
            if(v[i]>x)
            {
                x=v[i];
                k++;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}