#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;int x,y;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    x=3-x;
    y=3-y;
    if(x<0)
    {
        x*=(-1);
    }
    if(y<0)
    {
        y*=(-1);
    }
    cout<<(x+y);

    return 0;
}