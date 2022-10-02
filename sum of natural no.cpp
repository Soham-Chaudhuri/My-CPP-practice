#include<iostream>
#include<math.h>
using namespace std;
int sum(int a){
    int s=0;
    s=(a*(a+1))/2;
    return s;
}


int main(){
    int n;
    cin>>n;
   cout<<sum(n)<<endl;



    return 0;
}