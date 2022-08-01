#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *first = NULL;
Node *second = NULL;

void insertAtEnd(int data)
{
    Node *curr = new Node(data);
    if (!first)
    {
        first = curr;
    }
    else
    {
        Node *p = first;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = curr;
    }
}

void insertAtEnd2(int data)
{
    Node *curr = new Node(data);
    if (!second)
    {
        second = curr;
    }
    else
    {
        Node *p = second;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = curr;
    }
}

void print()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void addTwoLists(Node* first,Node* second)
{
    string fir = ""; 
    string sec = "";
    Node *p = first;
    while (p!=NULL)
    {
        fir+=first->data;
        p = p->next;
    }
    p = second;
    while (p!=NULL)
    {
        fir+=second->data;
        p = p->next;
    }
    int sum = stoi(fir)+stoi(sec); 
    cout<<sum;
}


int main(int argc, char const *argv[])
{
    insertAtEnd(1);
    insertAtEnd(0);
    insertAtEnd2(5);
    addTwoLists(first,second);
    return 0;
}
