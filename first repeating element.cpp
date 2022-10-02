#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,minN=INT_MAX;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N= 1e6+2;
    int idx[N];
    for(i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1)
        {
            minN=min(minN,idx[a[i]]);
            
        }
        else{
            
            idx[a[i]]=i;

        }
    }
   
    if(minN==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minN+1<<endl;
    }

    return 0;
}