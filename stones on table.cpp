#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;string s="";string str="";
    
        cin>>s;
       
    
    int i, l;s=" "+s+" ";
    t+=2;
        int k=0;
        for(i=0;i<t-1;i++)
        {
            if((s.at(i)==s.at(i+1)))
            {
                k+=1;
            }
        }
        /*if(t>1){
        if(((s.at(1)==s.at(2))||(s.at(t-3)==s.at(t-2))))
        {
            k-=1;
        }
        }*/
        cout<<k;


    return 0;
}