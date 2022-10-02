#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
     int a[n],mint=INT_MAX,ind;
    for(int i=0;i<n;i++){
        int st,freq;
        cin>>st>>freq;
        if(t<=st){
           a[i]=st;
        }
        else{
            int u=t-st;
            int next = ((u-1)/freq + 1)*freq;
            a[i]=next+st;
        }
    }
    for(int i=0;i<n;i++){
        if(mint>a[i]){
            mint=a[i];
            ind=i;
        }
    }
    cout<<ind+1<<"\n";

    return 0;
    
}