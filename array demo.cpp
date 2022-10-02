/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int t,n,max=-1,m,c=0;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		cin>>n>>m;
		string z[n][m];
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				string a;
				cin>>a;
				z[j][k]=a;
			}
		}
		for( int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(z[j][k]=="#")
				{
					c++;
				}
			}
			if(c>max)
			{
				max=c;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}