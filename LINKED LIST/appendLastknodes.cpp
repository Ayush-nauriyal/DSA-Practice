//APPEND LAST 2 NODES

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
void insertatTail(node* &head,int a)
{ 
    if(head==NULL)
    {
        insertAtHead(head,a);
        return;
    }
    node* n=new node(a);
    node* temp=head;
    while(temp->neat!=NULL)
    {
        temp=temp->neat;
    }
    temp->neat=n;
}
void display(node *head)
{
    while (head!= NULL)
    {
        cout << head->data << " ";
        head = head->neat;
    }
    cout << endl;
}
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->neat;
    delete todelete;
}
void Delete(node *&head, int a)
{
    if (head == NULL)
    {
        return;
    }
    if (head->neat == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->neat->data != a)
    {
        temp = temp->neat;
    }
    node *toDelete = temp->neat;
    temp->neat = temp->neat->neat;
    delete toDelete;
}
int length(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->neat;
        len++;
    }
    return len;
}/*
//recursive method
node *recursivemerge(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *merged;
    if (head1->data > head2->data)
    {
        merged = head1;
        merged->neat = recursivemerge(head1->neat, head2);
    }
    if (head1->data < head2->data)
    {
        merged = head2;
        merged->neat = recursivemerge(head1, head2->neat);
    }

    return merged;
}
//iteratative method
node *normalmerge(node *&head1, node *&head2)
{
    node *merged;
    node *t1 = head1;
    node *t2 = head2;
    node *t3 = merged;
    while (t1 != NULL && t2 != NULL)
    {
        if (t1->data > t2->data)
        {
            merged->neat = t1;
            t1 = t1->neat;
        }
        if (t1->data < t2->data)
        {
            merged->neat = t2;
            t2 = t2->neat;
        }
        while (t1 != NULL)
        {
            merged->neat = t1;
            t1 = t1->neat;
        }
        while (t2 != NULL)
        {
            merged->neat = t2;
            t2 = t2->neat;
        }
    }
    return t3;
}
*/
node *kappend(node *&head, int a)
{
    node *newhead;
    node *newtail;
    node *tail = head;
    int len = length(head);
    a = a % len;
    int count = 1;
    while (tail->neat != NULL)
    {
        if (count = len - a)
        {
            newtail = tail;
        }
        if (count == len - a + 1)
        {
            newhead = tail;
        }
        tail = tail->neat;
        count++;
    }
    tail->neat = head;
    newtail->neat = NULL;
    return newhead;
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 9);
    insertAtHead(head, 0);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    display(head);
    Delete(head, 5);
    display(head);
    deleteAtHead(head);
    display(head);
    node *a = kappend(head, 4);
    display(a);
    return 0;
}