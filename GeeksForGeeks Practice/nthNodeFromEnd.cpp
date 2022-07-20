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

int count = 1;
int val = -1;
int getNthFromLast(Node *head, int n)
{
    if (head == NULL)
    {
        count = 1;
        val = -1;
        return -1;
    }
    else
    {
        getNthFromLast(head->next, n);
    }
    if (count==n)
    {
        val = head->data;
    }
        count++;
        return val;
}
int main(int argc, char const *argv[])
{
    insertAtEnd(78);
    insertAtEnd(5);
    insertAtEnd(23);
    print();
    cout<<endl;
    cout<<getNthFromLast(first,2);
    return 0;
}
