#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *neat;
    node(int v)
    {
        data = v;
        prev = NULL;
        neat = NULL;
    }
};
void insertathead(node *&head, int r)
{
    node *n = new node(r);
    n->neat = head;
    //if head is null there is no previous
    //to it
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertattail(node *&head, int a)
{
    if (head == NULL)
    {
        insertathead(head, a);
        return;
    }
    node *temp = head;
    node *n = new node(a);
    while (temp->neat != NULL)
    {
        temp = temp->neat;
    }
    temp->neat = n;
    n->prev = temp; //doubly linked list
}
 void deleteathead(node* &head)
{
    node* todel=head;
    //since head is the only link
    //it should remain undeleted 
    //thats why we make head point to null
    head=head->neat;
    head->prev=NULL;
    delete(todel);

}
void deletion (node * &head,int pos)
{
    node *temp=head;
    int count=1;
    if(pos==1)
    {
        deleteathead(head);
        return;
    }
    while(temp!=NULL && count!=pos)
    {
        temp=temp->neat;
        count++;
    }
    
    temp->prev->neat=temp->neat;
    if(temp->neat!=NULL)
    {
temp->neat->prev=temp->prev;
    }
    

    delete(temp);


}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->neat;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    insertattail(head, 6);
    insertattail(head, 8);
    insertattail(head, 9);
    insertattail(head, 4);
    display(head);
    insertathead(head, 6);
    insertathead(head, 6);
    insertathead(head, 3);
    insertathead(head, 9);
    insertathead(head, 1);
    display(head);
    deletion(head,3);
    display(head);

    return 0;
}
