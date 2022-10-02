#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;int c0=0;
    int c1=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        else{
            c1++;
        }

    }
    while((c0>0)&&(c1>0))
    {
        c0--;c1--;
    }
    cout<<(c0+c1)<<endl;
    return 0;

}