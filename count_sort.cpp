#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int v[n];
        
        int i;
        int maxs=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>v[i];maxs=max(maxs,v[i]);
        }
        int countele[maxs];
        int positioncount[maxs];
    
        for(i=0;i<=maxs;i++)
        {
            countele[i]=0;
            positioncount[i]=0;
        }
        //cout<<"YO2"<<endl;
        for(i=0;i<n;i++)
        {
            countele[v[i]]++;//cout<<"YO3"<<endl;
        }
        int s=0;
        for(i=0;i<=maxs;i++)
        {
            s+=countele[i];//cout<<"YO4"<<endl;
            positioncount[i]=s;
        }
        int ans[n];
        for(i=n-1;i>=0;i--)
        {
            positioncount[v[i]]--;//cout<<"YO5"<<endl;
            ans[positioncount[v[i]]]=v[i];
            
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        
        
        return 0;
}