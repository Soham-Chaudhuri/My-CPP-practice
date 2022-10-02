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
        int k=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-2;i++)
        {
            if(v[i]>=1)
            {
                k++;

            }

        }
        int l=v.size();
        while(k>0)
        {
            if(v[l-1]>=(k+1)  &&  v[l-2]>=(k+1))
            {
                
                break;
            }
            else
            {
                k--;
            }
            
        }
        cout<<k<<endl;


    }


    return 0;

}