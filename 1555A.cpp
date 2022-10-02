#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long int n;
      cin>>n;
      
      long long int time=0;
      
      time=max(6ll,n+1)/2*5;
      
      cout<<time<<endl;  
    }
    return 0;
}