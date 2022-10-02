#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=0,s=0;
    int t;int i;
    cin>>t;
    int a[3];
    while(t-->0)
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<3;i++)
        {
            s+=a[i];
        }
        if(s>=2)
        {
            c+=1;
        }
        s=0;
        

    }
    cout<<c<<endl;

    return 0;
}