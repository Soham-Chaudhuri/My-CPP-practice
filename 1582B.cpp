#include<bits/stdc++.h>
using namespace std;
/*
void loop(vector<int> &a,int sum,int j,vector<int> &v)
{
    if(j==a.size())
    {
        v.push_back(sum);
        return ;
    }
    loop(a,sum+a[j],j+1,v);
    loop(a,sum,j+1,v);

}
*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int i;
        int s0=0,s1=0;
        vector<int> a;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                s0++;
            }
            else if(a[i]==1)
            {
                s1++;
            }
        }
        cout<<(long long int)(ceil(pow(2,s0))*s1)<<endl;
        /*
        vector<int> v;
        loop(a,0,0,v);
        int k=0;
        for(i=0;i<v.size();i++)
        {
            if(v[i]==(s-1))
            {
                k+=1;
            }
        }
        cout<<k<<endl;
        */



        
    }
    return 0;
}