#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int count=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==1)
            {
                count+=1;
            }
            else if(s[i]==0)
            {
                sum+=1;
            }
        }
        cout<<count<<" "<<sum<<endl;
    }
    return 0;
}