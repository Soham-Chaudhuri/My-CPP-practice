#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char a[n][n];
        int i;int j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]='.';
            }
        }
        if(k<=floor((n+1)/2))
        {
            for(i=0;i<n;i+=2)
            {
                if(k>0){
                    a[i][i]='R';k--;
                }
                
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
    return 0;
}