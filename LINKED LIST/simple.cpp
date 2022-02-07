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
void inser(node* &head,int val,int k)
{     node* aw;
    node* temp=head;
    while(temp->neat!=NULL&&k!=0);
    {
        temp=temp->neat;
        k--;
    }


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
int main()
{
    node *head = NULL;
    insertAtTail(head, 7);
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 9);
    insertAtHead(head, 0);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head,9);
    display(head);

    return 0;
}