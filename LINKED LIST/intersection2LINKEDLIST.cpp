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
}
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
void intersect(node* & head1,node* & head2,int pos)
{
    node* temp=head1;
    pos--;
    while(pos--)
    {
        temp=temp->neat;
    }
    node* temp2=head2;
    while(temp->neat!=NULL)
    {
        temp2=temp->neat;
    }
    temp2->neat=temp;

}
int checkintersection(node *&head1, node *&head2)
{
    node *ptr1;
    node *ptr2;
    int len = 0;
    int l1 = length(head1);
    int l2 = length(head2);
    if (l1 < l2)
    {
        len = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    if (l2 < l1)
    {
        len = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    while (len)
    {
        ptr1 = ptr1->neat;
        if (ptr1 == NULL)
        {
            return -1;
        }
        len--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->neat;
        ptr2 = ptr2->neat;
    }
}

int main()
{
    node *head = NULL;
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
    intersect(head,head2,4);
    display(head2);
    display(head);
    cout<<checkintersection(head,head2);
    //Delete(head, 5);
    //display(head);
    //deleteAtHead(head);
    display(head);
    //node *a = kappend(head, 4);
    //display(a);
    return 0;
}