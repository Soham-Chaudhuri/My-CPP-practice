#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];k-=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());int max=0;

        int i=0;
        while(a[i]>=a[k])
        {
            max+=1;
            i++;
        }
        cout<<max<<"\n";
        
    }
    return 0;
}