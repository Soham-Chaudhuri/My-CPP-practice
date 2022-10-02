#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;if(k==1)
        {
            cout<<"9";cout<<endl;
        }
        else if(k==2)
        {
            cout<<"98";cout<<endl;
        }
        else if(k==3)
        {
            cout<<"989";cout<<endl;
        }
        else
        {
            cout<<"989";
            k-=3;
        for(int i=0;i<=9;i++)
        {
            if(k>0)
            {
                cout<<i;
                if(i==9)
                {
                    i=-1;
                }
                k--;
            }
        }
        cout<<endl;
        }

    }
    return 0;
}