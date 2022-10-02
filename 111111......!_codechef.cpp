#include<bits/stdc++.h>
using namespace std;
vector<long long int> v;
long long int x=1000000;
void set()
{
    long long int k=1;
    for(int i=0;i<x;i++)
    {
        v.push_back(x);
        k=k*10+1;

    }
}
int main(){
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int p=0;
        for(int i=0;i<x;i++)
        {
            if(n%2!=0 && n%5!=0)
            {
                if(v[i]%n==0)
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
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