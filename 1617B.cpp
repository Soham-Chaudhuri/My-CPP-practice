#include<bits/stdc++.h>
using namespace std;
bool gcd(int a , int b , int c)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    if(a==c)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
int primeFactor(int m)
{
    int i,j=1;
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            j=i;
            break;
        }
    }
    return j;
}
*/


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int i;
        int j;
        bool stop=false;
        long long int x=0,y=0,z=0;
        //z=primeFactor(n);
        z=1;
            for(j=1;j<(n-z);j++)
            {
                x=j;
                y=n-(x+z);
                if((x!=y)&&(y!=z)&&(z!=x))
                {
                if(gcd(x,y,z))
                {
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    stop=true;
                    break;
                }
                }

            }
            
        }
    


    return 0;
}