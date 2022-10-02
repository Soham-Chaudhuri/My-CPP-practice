#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        vector<pair<int,int> > v;
        int i;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        /*
        for(i=0;i<n;i++)
        {
            v.push_back(make_pair(a[i],i));
        }
        */
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int k=0;
        for(i=0;i<n;i++)
        {
            if((a[i]+1==b[i]))
            {
                k++;
                
            }
            else if((a[i]==b[i]))
            {
                
                k++;
                
            }
        }
        if(k!=n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

        



    }
    return 0;
}