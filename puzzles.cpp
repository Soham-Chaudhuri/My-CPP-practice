#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];

    }
    sort(a,a+m);
    
    int min=INT_MAX;
    for(int i=0;i<=m-n;i++)
    {
        if(a[i+(n-1)]-a[i]<min)
        {
            min=a[i+(n-1)]-a[i];
        }
    }
    cout<<min<<endl;
     return 0;
}