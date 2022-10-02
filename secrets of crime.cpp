#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int v[4][2];
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            v[i][j]=-1;
        }
    }
    int k=0,l=0;int x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((a[i][j]=='*'))
            {
                v[k][0]=i;
                v[k][1]=j;
                k++;
            }
            
        }
    }
    /* for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }*/
    if(v[0][0]==v[1][0])
    {
        v[3][0]=v[2][0];
    }
     else if(v[0][0]==v[2][0])
    {
        v[3][0]=v[1][0];
        
    }
    else if(v[0][1]==v[1][1])
    {
        v[3][0]=v[0][0];
    }
    else if(v[0][1]==v[2][1])
    {
        v[3][0]=v[0][0];
    }
    
         
     if(v[0][1]==v[1][1])
    {
        v[3][1]=v[2][1];
    }
    else if(v[0][1]==v[2][1])
    {
        v[3][1]=v[1][1];
    }
    else if(v[0][0]==v[1][0])
    {
        v[3][1]=v[0][1];
    }
    else if(v[0][0]==v[2][0])
    {
        v[3][1]=v[1][1];
    }
    x=v[3][0]+1;
    y=v[3][1]+1;
    cout<<x<<" "<<y;
    
   
    return 0;
}