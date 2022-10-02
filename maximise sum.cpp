#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	while(t--)
	{
		int k , n;
		cin>>n>>k;
        int N= 1e6+2;
		int a[n];int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
        
		int b[N];int sum=0;
        for(i=0;i<N;i++)
        {
            b[i]=INT_MIN;
        }
        for(i=0;i<n;i++)
		{
            if((a[i]<0)&&(b[a[i]]==INT_MIN)){
			b[a[i]]=a[i]*(-1);
            }
            else if((a[i]>0)&&(b[a[i]]==INT_MIN)){
                b[a[i]]=a[i];
            }
            else{
                b[a[i]]+=a[i];
            }
		}
        
        for(i=0;i<N;i++)
        {
            cout<<b[i]<<" "<<endl;
        }
        for(i=N-1;i>=0;i--)
        {
            if((b[i]!=INT_MIN)&&(k>0))
            {
                sum+=b[i];k--;
            }
        }
        cout<<sum<<endl;


	}
	return 0;
}