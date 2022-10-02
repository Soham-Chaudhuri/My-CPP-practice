#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,n;
	    cin>>a>>b>>n;n--;
	    long long int ans=(a^b);
        if(ans==0)
        {
            cout<<ans<<endl;
        }
        else if(ans<=n)
        {
            cout<<1<<endl;
        }
        else if(n!=0&&__lg(ans)==__lg(n))
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

	}
	
	return 0;
}
