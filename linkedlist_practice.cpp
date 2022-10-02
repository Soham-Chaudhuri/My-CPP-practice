#include<bits/stdc++.h>
#include<vector>
#include<string.h>
#include<iostream>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
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
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
class node{
    public:
    int data;
    string name;
    int marks;
    node* next;
    node(int val,string s,int x)
    {
        data=val;
        name=s;
        marks=x;
        next=NULL;

    }
};
void insertAtTail(node* &head,int val,string s,int x)
{
    node* n=new node(val,s,x);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertAtHead(node* &head,int val,string s,int x)
{
    node* n=new node(val,s,x);
    n->next=head;
    head=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<","<<temp->name<<","<<temp->marks<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void displayonlyvalue(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverseK(node* &head,int k)
{
    node* nextptr;
    node* prevptr=NULL;
    node* currptr=head;
    int count =0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next=reverseK(nextptr,k);

    }
    return prevptr;
}
void deletionAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletionbyvalue(node* head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deletionAtHead(head);
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* kappend(node* &head,int k)
{
    int l=1;
    node* temp=head;
    node* tail;
    while(temp->next!=NULL)
    {
        temp=temp->next;l++;
    }
    tail=temp;k=k%l;
    l=l-k;
    temp=head;
    node* newtail;
    node* newhead;
    int count=1;
    while(count<l)
    {
        temp=temp->next;
        count++;
    }
    newtail=temp;
    newhead=temp->next;
    tail->next=head;
    newtail->next=NULL;
    return newhead;

}
void intersect2linkedlist(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int intersectionpoint(node* &head1,node* &head2)
{
    int l1=1;node* temp1=head1;
    int l2=1;node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;l2++;
    }
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;l1++;
    }
    node* pt1;
    node* pt2;
    if(l1>l2)
    {
        pt1=head1;
        pt2=head2;
    }
    else
    {
        pt2=head1;
        pt1=head2;
    }
    int count=abs(l1-l2);
    while(count--)
    {
        if(pt1==NULL)
        {
            return -1;
        }
        pt1=pt1->next;
    }
    while(pt1!=NULL && pt2!=NULL)
    {
        if(pt1==pt2)
        {
            return pt1->data;
        }
        pt1=pt1->next;
        pt2=pt2->next;
    }
    return -1;


}
int main()
{
    node* head=NULL;
    for(int i=2;i<=6;i++)
    {
        string str;
        cin>>str;
        insertAtTail(head,i,str,100-i);
    }
    insertAtHead(head,1,"S",100);
    //display(head);
    //cout<<endl;
    //deletionAtHead(head);
    //deletionbyvalue(head,6);
    //display(head);
    //node* newhead=reverseK(head,2);
    //display(newhead);
    //node* newhead=kappend(head,3);
    //display(newhead);
    /*
    {
    node* head1=NULL;
    for(int i=2;i<=6;i++)
    {
        string str;
        cin>>str;
        insertAtTail(head1,i,str,100-i);
    }
    insertAtHead(head1,1,"S",100);
    node* head2=NULL;
    insertAtTail(head2,9,"S",100);
    insertAtTail(head2,10,"S",100);
    insertAtTail(head2,11,"S",100);
    intersect2linkedlist(head1,head2,3);
    displayonlyvalue(head1);
    displayonlyvalue(head2);
    cout<<intersectionpoint(head1,head2);
    }
    */
    return 0;
}