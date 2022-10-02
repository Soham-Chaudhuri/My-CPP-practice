#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        
        int x=0;
        int j;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>0){
            j=i;x=max(a[i],x);a[i]=1;x--;

            }
            if(j!=i && x>0)
            {
                a[i]=1;
                x--;
            }
            
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}