#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull x,y;
        cin>>x>>y;
        ull r1=0,r2=0,i,q;
        q=x;
        while(q>0)
        {
            q=q/10;
            r1++;
        }
        q=y;
        while(q>0)
        {
            q=q/10;
            r2++;
        }
        q=x;
        r2=r2-r1;
        ull step=0;
        while(x!=y && r2>=0)
        {
            cout<<"YO"<<endl;
            if(x*pow(10,r2)<=y)
            {
                ull z=ceil(x*pow(10,r2));
                step+=(y/z);
                y%=z;
                
            }
            else
            {
                r2--;
            }
        }
        cout<<step<<endl;
    }
    return 0;
}