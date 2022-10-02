#include<iostream>
#include<math.h>
using namespace std;
bool check(int x,int y,int z){
    int m,n,o;
    if(x>y)
    {
        if(x>z)
        {
            if(x*x==(y*y+z*z))
            {
                return true;
            }
            else{
                return false;
            }
        }
        else {
            if(z*z==(y*y+x*x))
            {
                return true;
            }
            else{
                return false;
            }
        }
    }
    else if (y>z)
    {
        if(y*y==(x*x+z*z))
            {
                return true;
            }
            else{
                return false;
            }
    }
    else
    {
        if(z*z==(y*y+x*x))
            {
                return true;
            }
            else{
                return false;
            }
    }
    
}




int main(){
    int a , b, c;
    cin>>a>>b>>c;
    cout<<check(a,b,c)<<endl;
    return 0;
}