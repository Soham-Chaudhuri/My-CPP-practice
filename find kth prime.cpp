#include<bits/stdc++.h>
using namespace std;

int prime[9000001]={0};
void primeSieve(int y)
{
   // int N=9000000;
    //int prime[N+1]; 
    
    for(int i=2;i<=9000001;i++)
    {
        prime[i]=0;
    }
    for(int i=2;i*i<=9000001;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=9000001;j+=i )
            {
                if(prime[j]==0)
                {
                    prime[j]=1;
                }
            }
        }
    }
    int p=0;
    for(int i=2;i<=9000001;i++)
    {
        if(prime[i]==0)
        {
            p++;
            if(p==y)
            {
                cout<<i<<endl;
            }
        }
    }

}



int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        primeSieve(k);

    }
    return 0;
}