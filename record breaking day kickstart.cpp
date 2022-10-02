#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;int i,j;
        cin>>n;
        int a[n+2];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        a[0]=0;
        a[n]=0;
        i=0;int maxN=INT_MIN;
        for(j=1;j<=n;j++)
        {
           maxN=max(maxN,a[j-1]);
           if((a[j]>maxN)&&(a[j]>a[j+1]))
           {
               i+=1;
           }
            
        }
        cout<<i<<endl;


    }
    return 0;
}