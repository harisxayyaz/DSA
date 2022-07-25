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

Node *removeDuplicates(Node *head)
{
    if (!head)
    {
        return NULL;
    }
    else
    {
        if (head->next != NULL)
        {
            if (head->data == head->next->next->data)
            {
                head->next = head->next->next;
            }
        }
        removeDuplicates(head->next);
    }
    return head;
}

void print(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    insertAtEnd(78);
    insertAtEnd(78);
    insertAtEnd(5);
    insertAtEnd(1);
    insertAtEnd(24);
    print(first);
    Node *second = removeDuplicates(first);
    print(second);
    return 0;
}
