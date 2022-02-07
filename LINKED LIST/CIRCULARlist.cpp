#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* neat;

    node(int val){
        data=val;
        neat=NULL;
    }
};
void insertAtHead(node *&head,int a)
{node* n=new node(a);
    if(head==NULL)
    {
        n->neat=n;
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->neat!=head)
    {
        temp=temp->neat;
    }
    temp->neat=n;
    n->neat=head;
    head=n;
}
void insertAtTail(node* &head,int a)
{
    if(head==NULL)
    {
        insertAtHead(head,a);
        return;
    }
    node* temp=head;
    node* n=new node(a);
    while(temp->neat!=head)
    {
        temp=temp->neat;
    }
    temp->neat=n;
    n->neat=head;
}
void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->neat!=head){
        temp=temp->neat;
    }

    node* todelete=head;
    temp->neat=head->neat;
    head=head->neat;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }
      node* temp=head;
      int count=1;

      while(count!=pos-1){
          temp=temp->neat;
          count++;
      }

      node* todelete=temp->neat;
      temp->neat=temp->neat->neat;

      delete todelete;
}

void display(node* head){


    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->neat;
    } while (temp!=head);
    cout<<endl;
    
}


int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,1);
    display(head);
    

    return 0;
}
/*
inserthead( node* &head,int a)
{
    if(head==NULL)
    {
        n-neat=n;
        head=n;
        return;
    }
    node* n=new node(a);
    node* temp=head;
    while(temp->neat!=head)
    {
        temp=temp->neat;
    }
    temp->neat=n;
    n-neat=head;
    head=n;
}
*/