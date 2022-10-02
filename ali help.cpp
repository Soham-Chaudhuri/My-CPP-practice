#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;string v[6]={"A","E","I","O","U","Y"};
	cin>>s;int c=-1;
	if((((int)s[2])!=((int)v[0]))||(((int)s[2])!=((int)v[1]))||(((int)s[2])!=((int)v[2]))||(((int)s[2])!=((int)v[3]))||(((int)s[2])!=((int)v[5]))||(((int)s[2])!=((int)v[4])))
    {
      if((((int)s[0])+((int)s[1])%2==0)&&(((int)s[3])+((int)s[4])%2==0)&&(((int)s[4])+((int)s[5])%2==0)&&(((int)s[7])+((int)s[8])%2==0))  
	  {
		  c=0;
	  }
	  if(c==0){
		  cout<<"valid"<<endl;
	  }
	  else
	  {
		  cout<<"invalid"<<endl;
	  }
    }
	return 0;
}