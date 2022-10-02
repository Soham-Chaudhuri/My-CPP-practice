#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n)
{
    bool p=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            p=false;
            return p;
        }
    }
    return p;

}



void solve(int arr[],int n,int x[])
{
    int ans=0;
    if(check(arr,x,n))
    {
        cout<<ans<<endl;
        return;
    }
    sort(arr+1,arr+n);ans++;
    if(check(arr,x,n))
    {
        cout<<ans<<endl;
        return;
    }
    sort(arr,arr+(n-1));ans++;
    
    if(check(arr,x,n))
    {
        cout<<ans<<endl;
        return;
    }
    
    
    
    

}

void solve_opt(int arr[],int x[],int n)
{
    int ans=0;
    if(check(arr,x,n))
    {
        cout<<ans<<endl;
        return;
    }
    if(arr[0]==1 && arr[n-1]!=n)
    {
        ans=1;
        cout<<ans<<endl;
        return;
    }
    if(arr[n-1]==n && arr[0]!=1)
    {
        ans=1;
        cout<<ans<<endl;
        return;
    }
    if(arr[n-1]==1 && arr[0]!=n)
    {
        ans=2;
        cout<<ans<<endl;
        return;
    }
    if(arr[0]==n && arr[n-1]==1)
    {
        ans=3;
        cout<<ans<<endl;
        return;
    }
    if(arr[0]==n && arr[n-1]!=1)
    {
        ans=2;
        cout<<ans<<endl;
        return;
    }
    if(arr[0]==1 && arr[n-1]==n)
    {
        ans=1;
        cout<<ans<<endl;
        return;
    }
    cout<<"2"<<endl;
    return;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n];int arrs[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];arrs[i]=i+1;
        }
        
        solve_opt(arr1,arrs,n);
    }
    return  0;
}