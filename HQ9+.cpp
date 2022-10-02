#include<bits/stdc++.h>
//yo
using namespace std;
int main()
{
    char ar[101];
    cin.getline(ar,101);
    bool p=false;
    for(int i=0;i<101;i++)
    {
        if((ar[i]=='H')||(ar[i]=='Q')||(ar[i]=='9'))
        {
            p=true;
            
        }
    }
    if(p)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}