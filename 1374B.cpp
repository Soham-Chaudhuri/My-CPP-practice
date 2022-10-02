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
        int p=0;
        while(n>1)
        {
            if(n%6==0)
            {
                n/=6;
                p++;

            }
            else if(n%3==0)
            {
                n*=2;
                p++;
            }
            
            else{
                p=-1;
                break;
            }
            if(n==1)
            {
                break;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}