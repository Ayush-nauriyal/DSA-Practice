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
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->neat;
    delete todelete;
}
void deletion(node *&head, int a)
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
int main()
{
    node *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 3);
    //insertAtHead(head,4);
    display(head);
    insertAtTail(head, 7);
     deletion(head, 5);
    display(head);
    //deleteAtHead(head);
    //display(head);
    return 0;
}