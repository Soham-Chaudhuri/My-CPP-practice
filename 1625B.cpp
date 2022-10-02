#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        ull a[n];
        ull i;ull maxs=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];maxs=max(maxs,a[i]);
        }
        //cout<<maxs<<endl;
        ull indx[maxs+1]={0};
        for(i=0;i<n;i++)
        {
            indx[a[i]]=i+1;
        }
        for(i=0;i<maxs+1;i++)
        {
            //cout<<i<<"  "<<indx[i]<<endl;
        }
        ull maxs1=0;ull j=0;
        for(i=0;i<maxs+1;i++)
        {
            if(j<n && a[j]==i)
            {
                maxs1=max(indx[i]-j,maxs1);//cout<<"YO"<<endl;
            }
            j++;
        }
        if(maxs1==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<maxs<<endl;
        }
        

    }
    return 0;
}