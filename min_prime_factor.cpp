#include<bits/stdc++.h>
using namespace std;

int prime[1000001]={0};
void min_prime_factor(int x)
{
    
    for(int i=2;i<=100000;i++)
    {
        prime[i]=i;
    }
    for(int i=2;i*i<=100000;i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i;j<=100000;j+=i)
            {
                if(prime[j]==j)
                {
                    prime[j]=i;
                }
            }
        }
    }
    int cnt=0;
    for(int i=2;i<=100000;i++)
    {
        
        if(prime[i]==x)
        {
            cnt++;
        }
    }
cout<<cnt<<endl;

}




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    min_prime_factor(n);
    }
    return 0;
}