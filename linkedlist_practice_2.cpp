#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int x)
{
    node* n=new node(x);
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
void insertAtHead(node* &head,int x)
{
    node* n=new node(x);
    n->next=head;
    head=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deletionByValue(node* &head,int x)
{
    node* temp=head;
    while(temp->next->data!=x)
    {
        temp=temp->next;       
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* reverseByRecursion(node* &head,int k)
{
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;
    int count=0;
    
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        //nextptr->next=currptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
        
    }
    if(nextptr!=NULL)
    {
        head->next=reverseByRecursion(nextptr,k);
    }
    return prevptr;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtHead(head,1);
    node* newhead=reverseByRecursion(head,2);
    display(newhead);
    //deletionByValue(head,4);
    //display(head);


    return 0;
}