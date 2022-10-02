#include<bits/stdc++.h>
using namespace std;
//MORE OPTIMIZED O(N^2)
void rev(string s)
{
    if(s=="")
    {
        return ;

    }
    //cout<<s[0];
    rev(s.substr(1,s.length()-1));
    cout<<s[0];
}
//MORE OPTIMIZED O(N)
void rev1(string s,int indx)
{
    if(indx==s.size())
    {
        return ;
    }
    rev1(s,indx+1);
    cout<<s[indx];

}
//MORE OPTIMIZED O(N^2)
void rep(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    if((s[0]=='p')&&(s[1]=='i'))
    {
        cout<<"3.14";
        rep(s.substr(2));
    }
    else
    {
        cout<<s[0];
        rep(s.substr(1));
    }
}
//MORE OPTIMIZED O(N)
void rep1(string s,int indx)
{
    if(indx==s.size())
    {
        return ;
    }
    if(s[indx]=='p' && s[indx+1]=='i')
    {
        cout<<"3.14";
        rep1(s,indx+2);
    }
    else
    {
        cout<<s[indx];
        rep1(s,indx+1);
    }
}

//MOVE ALL X TO END
string move_x(string s)
{
    if(s.length()==0)
    {
        return "";

    }
    char ch=s[0];
    string s1=move_x(s.substr(1));
    if(ch=='x')
    {
        return (s1+ch);
    }
    
        return (ch+s1);
    
}


//REMOVE DUPLICATE
string remdup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string s1=remdup(s.substr(1));
    if(ch==s1[0])
    {
        return s1;
    }
    return (ch+s1);
}


void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;

    }
    
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }

}
bool palindrome(string s,int i,int e)
{
    if(i>=e)
    {
        return true;
    }
    if(s[i]!=s[e])
    {
        return false;
    }
    return palindrome(s,i+1,e-1);

}


int main()
{
    //rev("SOHAM CHAUDHURI");
    //rep("pippxxppiixipi");
    //rev1("SOHAM CHAUDURI",0);
    //rep1("pippxxppiixipi",0);
    //cout<<move_x("abxscxbssxbbcxx")<<endl;
    //cout<<remdup("aaabbbcccddddeeeefff")<<endl;
    //permutation("abc","");
    //cout<<palindrome("abba",0,3)<<endl;
    return 0;
}