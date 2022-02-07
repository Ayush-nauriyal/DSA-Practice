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
    while (temp->neat != NULL)
    {
        cout << temp->data << " ";
        temp = temp->neat;
    }
    cout << endl;
}
node * reverse(node* &head)
{
    node*prev=NULL;
    node*cur=head;
    node*neatptr;
    while(cur!=NULL)
    {
        neatptr=cur->neat;
        cur->neat=prev;

        prev=cur;
        cur=neatptr;
    }
    return prev;

}
node* recursivereverse(node* & head)
{
    if(head==NULL||head->neat==NULL)
    {
        return head;
    }
    node* newhead=recursivereverse(head->neat);
    head->neat->neat=head;
    head->neat=NULL;
    return newhead;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 7);
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    insertAtTail(head, 9);
    display(head);
    insertAtHead(head, 9);
    insertAtHead(head, 0);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    display(head);
    node *newhead=reverse(head);//could also use head instead
    display(newhead);//of newhead
    //node *newhead=recursivereverse(head);//could also use head instead
    //display(newhead);//of newhead

    return 0;
}


/*node * reverse(node* &head)
{
    node* prev=NULL;
    node* cur=head;
    node* neatptr;
    while(cur!=NULL)
    {
        neatptr=cur->neat;
        cur->neat=prev;

        prev=cur;
        cur=neatptr;
    }
    return prev;
}
*/
/*
node recursive( node* &head)
{
    if(head==NULL||head->neat==NULL)
    {
        return head;
    }
    node * newnode=recursive(head->neat);
    head->neat->neat=head;
    head->NULL;
    return newnode;
}
*/





