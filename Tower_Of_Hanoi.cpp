#include<bits/stdc++.h>
using namespace std;
void tower_of_Hanoi(int n , char s , char d , char h)
{
    if(n==0)
    {
        return ;
    }
    tower_of_Hanoi(n-1,s,h,d);
    cout<<"MOVE FROM "<<s<<" TO "<<d<<endl;
    tower_of_Hanoi(n-1,h,d,s);
}

int main(){
    tower_of_Hanoi(10,'A','C','B');
    return 0;
}