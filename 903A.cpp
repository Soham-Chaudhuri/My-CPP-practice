#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=-1;
        while(n>=3)
        {
            if((n%3==0)||(n%7==0))
            {
                p=0;
                break;
            }
            n-=7;
            
        }
        if(p!=-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl; 
        }
    
        
    }
    return 0;
}