#include<bits/stdc++.h>
using namespace std;

/*int n;
int raisePower(int p)
{
    if(p==0)
    {
        return 1;
    }
    int prod=raisePower(p-1);
    return n*prod;
}

*/
/*
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact=factorial(n-1);
    return n*fact;
}*/
//Starting from 1,1,2....
int fibo(int a,int b,int x)
{
    if(x==2)
    {
        return (a+b);
    }
    else if(x==1)
    {
        return 1;
    }
    int c=a+b;
    return fibo(b,c,x-1);
    
}

//MORE COMPACT AND OPTIMIZED
//Starting from 1,1,2.....
/*int fibo_opt(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }

    return fibo_opt(x-1)+fibo_opt(x-2);
} */
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    return (arr[0]<=arr[1] && sorted(arr+1,n-1));
}



int main(){
    int n;
    cin>>n;
    //cin>>n>>x;
    //cout<<raisePower(x)<<endl;
    //cout<<factorial(x)<<endl;
    //cout<<fibo(0,1,n)<<endl;
    //cout<<fibo_opt(n)<<endl;
    int a[]={1,2,2,3,4,5,6};
    cout<<sorted(a,7)<<endl;
    
    return 0;
}
