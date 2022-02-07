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
    while (temp != NULL)
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
void evenafterodd(node *&head)
{
    node *odd = head;
    node *even = head->neat;
    node *evenstart = even;
    while (odd->neat != NULL && even->neat != NULL)
    {
        odd->neat = even->neat;
        odd = odd->neat;
        even->neat = odd->neat;
        even = even->neat;
    }
    odd->neat = evenstart;
    if (odd->neat != NULL)
    {
        even->neat = NULL;
    }
}

void even(node *&head)
{
    node *odd = head;
    node *even = head->neat;
    node *evenstart = even;
    while (even->neat != NULL && odd->neat != NULL)
    {
        odd->neat = even->neat;
        odd = odd->neat;
        even->neat = odd->neat;
        even = even->neat;
    }
    odd->neat = evenstart;
    if (odd->neat != NULL)
    {
        even->neat = NULL;
    }
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
    insertAtHead(head, 9);
    display(head);
    evenafterodd(head);
    display(head);

    return 0;
}