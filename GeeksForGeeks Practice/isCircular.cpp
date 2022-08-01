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

void print()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

bool isCircular(Node *head)
{
   Node *p = head;
   while (p!=NULL && p->next!=head)
   {
    p = p->next;
   }
   if (!p)
   {
    return 0;
   }
   return 1;
   
   
   
}

int main(int argc, char const *argv[])
{
    insertAtEnd(667);
    insertAtEnd(299);
    insertAtEnd(35);
    insertAtEnd(664);
    cout<<isCircular(first);
    cout<<endl;
    return 0;
}
