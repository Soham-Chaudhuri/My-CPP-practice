#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    int maxN=INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
       /* for(int j=0;j<=i;j++)
        {
            maxN=max(maxN,a[j]);
        }*/
        maxN=max(maxN,a[i]);
        cout<<maxN<<" ";

    }
    



    return 0;
}