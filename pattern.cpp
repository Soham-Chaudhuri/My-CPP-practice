#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i ,k=0,j;
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>=1;k--)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*  ";
        }
        if(i!=1)
        {
            for(j=1;j<=i-1;j++)
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            cout<<"   ";
        }
        for(j=n;j>=i;j--)
        {
            cout<<"*  ";
        }
        
        {
            for(j=n-1;j>=i;j--)
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
    
}