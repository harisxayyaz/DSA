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

Node *insertAtBegining(Node *head, int x)
{
    Node *curr = new Node(x);
    if (!head)
    {
        head = curr;
    }
    else
    {
        curr->next = head;
        head = curr;
    }
    return head;
}

// Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)
{
    Node *curr = new Node(x);
    if (!head)
    {
        head = curr;
    }
    else{
        Node *p = head;
        while (p->next!=NULlL)
        {
            p = p->next;
        }
        p->next = curr;
    }
    return head;
}

int main(int argc, char const *argv[])
{
    return 0;
}
