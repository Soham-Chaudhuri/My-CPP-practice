#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
   
    long long int j=0;
    
    
    if((n+1)/2>=k)
    {
        cout<<2*k-1;
    }
    else
    {
        if(n%2)
        {
            cout<<2*((k-n/2)-1);
        }
        else
        {
            cout<<2*((k-n/2));
        }
    }
    return 0;
}