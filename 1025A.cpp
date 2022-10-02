#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[26]={0};
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        a[ch-'a']++;
    }
    int s=0;int ns=0;
    for(i=0;i<26;i++)
    {
        //cout<<a[i]<<endl;
        if(a[i]>1)
        {
            s=1;break;
        }
        

    }
    if(s==1 || n==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}