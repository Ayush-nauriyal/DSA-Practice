//merge 2 sorted list

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *neat;
    //initialises value
    node(int a)
    {
        data = a;
        neat = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->neat = head;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->neat != NULL)
    {
        temp = temp->neat;
    }
    temp->neat = n;
}
void display(node *head)
{ //could also simply do byhead no
    //need of temp
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->neat;
    }
    cout << endl;
}
bool search(node *&head, int a)
{
    node *temp = head;
    while (temp->neat != NULL)
    {
        if (temp->data == a)
            return true;
        temp = temp->neat;
    }
    return false;
}
node* merges(node* &head1,node* & head2)
{
    node* t1=head1;
    node* t2=head2;
    node *t3;
    node* merged=t3;
    while(t1!=NULL&&t2!=NULL)
    {
        if(t1->data>t2->data)
    {
        t3->neat=t1;
        t1=t1->neat;
    }
     if(t2->data>t1->data)
    {
        t3->neat=t2;
        t2=t2->neat;
    }
    }
    while(t1!=NULL)
    {
        t3->neat=t1;
        t1=t1->neat;
    }
    while(t2!=NULL)
    {
        t3->neat=t2;
        t2=t2->neat;
    }
}
//recursive
node * mergerecursive(node* &head1,node*&head2)
{
    if(head1=NULL)
    {
        return head2;
    }
    if(head2=NULL)
    {
        return head1;
    }
    node* merged;
    if(head1->data>head2->data)
    {
        merged=head1;
        merged ->neat=mergerecursive(head1->neat,head2);
    }
     if(head1->data<head2->data)
    {
        merged=head2;
        merged ->neat=mergerecursive(head1,head2->neat);
    }
    return merged;
}
int main()
{
    node *head = NULL;
    /*insertAtTail(head, 7);
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    insertAtTail(head, 9);
    display(head);
    insertAtHead(head, 9);
    insertAtHead(head, 0);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    display(head);
*/
node* head2=NULL;
 insertAtHead(head, 9);
    insertAtHead(head2, 0);
    insertAtHead(head, 5);
    insertAtHead(head2, 7);
    insertAtTail(head,8);
    insertAtTail(head2,0);
    insertAtTail(head,2);
    insertAtTail(head2,55);
    insertAtTail(head,41);
    insertAtTail(head2,82);
    insertAtTail(head2,51);
    insertAtTail(head,53);
    insertAtTail(head,57);
    insertAtTail(head,56);
    insertAtTail(head2,50);
    node * n=mergerecursive(head2,head);
    display(n);
    node*k=merges(head,head2);
    display(k);
    return 0;
}