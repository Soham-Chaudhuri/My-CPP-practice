#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;int n;int m;
    cin>>n>>m;
    int a[n][m];int b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }




    return 0;
}