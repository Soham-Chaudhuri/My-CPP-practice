#include<bits/stdc++.h>
using namespace std;
int main(){
    bool a[27];
    int b[27];
    int n,k;
    cin>>n>>k;
    int i;
    string s;
    cin>>s;
    for(i=0;i<27;i++)
    {
        a[i]=false;
    }
    for(i=0;i<n;i++)
    {
        a[s[i]-'a']=true;
    }
    int sum=0;int j=-2;
    for(i=0;i<27;i++)
    {
        if((a[i]) && (k>0) && (i>=j+2))
        {
            sum+=(i+1);j=i;k--;
        }
    }
    if(k==0){
    cout<<sum<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}