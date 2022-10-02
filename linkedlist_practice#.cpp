#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include <sstream>
#include <algorithm>
#include <random>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<ll, ll> pll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define bloop(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pop pop_back
#define inf 9999999999999
#define ninf -99999999999999
#define endl '\n'
const ll mod = 1e9 + 7;
void pairsort(lli a[], char b[], lli n){pair<int, char> pairt[n];for (int i = 0; i < n; i++){pairt[i].first = a[i];pairt[i].second = b[i];}sort(pairt, pairt + n);for (int i = 0; i < n; i++){a[i] = pairt[i].first;b[i] = pairt[i].second;}}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}

class node{
  public:
  ull data;
  string name;
  node* next;
  node(string s,ull val)
  {
    data=val;
    name=s;
    next=NULL;
  }
};
void insertAtHead(node* &head,string s,ull val)
{
  node* n=new node(s,val);
  if(head==NULL)
  {
    head=n;
    head->next=NULL;
    return;
  }
  n->next=head;
  head=n;
}
void insertAtTail(node* &head,string s,ull val)
{
  node* n=new node(s,val);
  if(head==NULL)
  {
    insertAtHead(head,s,val);
    return ;
  }
  node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=n;
}
void deletion(node* &head,string s,ull val)
{
    node* temp=head;
    if(head->data==val)
    {
        node* todelete=head;
        head=head->next;
        delete todelete;
        return;
    }
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"/"<<temp->name<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
      //YOUR CODE GOES HERE
      //PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
      node* head=NULL;
      char ch;ull x;string s1;
      do{
        cout<<"1. INSERT AT HEAD\n2. INSERT AT TAIL\n3. DELETION\n4. DISPLAY\n0. EXIT\nENTER YOUR CHOICE"<<endl;
        cin>>ch;
        switch (ch){
          case '1':
          cout<<"Input:"<<endl;
          cin>>x;cin>>s1;
          cout<<"INSERTION IN PROGESS"<<endl;
          insertAtHead(head,s1,x);
          cout<<"INSERTED"<<endl;
          cout<<"\n\n"<<endl;
          break;
          case '2':
          cout<<"Input:"<<endl;
          cin>>x;cin>>s1;
          cout<<"INSERTION IN PROGESS"<<endl;
          insertAtTail(head,s1,x);
          cout<<"INSERTED"<<endl;
          cout<<"\n\n"<<endl;
          break;
          case '3':
          cout<<"Input to delete:"<<endl;
          cin>>x;cin>>s1;
          cout<<"DELETION IN PROGESS"<<endl;
          deletion(head,s1,x);
          cout<<x<<" "<<s1<<" "<<"DELETED"<<endl;
          cout<<"\n\n"<<endl;
          break;
          case '4':
          cout<<"DISPLAY:"<<endl;
          display(head);
          cout<<"\n\n"<<endl;
          break;
          case '0':
          cout<<"EXIT IN PROGESS"<<endl;
          cout<<endl;
        }
      }while(ch!='0');
    }
   return 0;
}