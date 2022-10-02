#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][n];
    int i;
    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if((a[i][j]=='.')  &&  (a[i-1][j]=='.') &&  (a[i][j+1]=='.') &&  (a[i+1][j]=='.') &&  (a[i][j-1]=='.'))
            {
                a[i][j]='#';a[i-1][j]='#';a[i][j+1]='#';a[i+1][j]='#';a[i][j-1]='#';
            }
        }
    }
    bool b=true;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!='#')
            {
                b=false;
            }
        }
    }
    if(b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}