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
Node *last = NULL;

void insertAtEnd(int data)
{
    Node *curr = new Node(data);
    if (!first)
    {
        first = last = curr;
    }
    else
    {
        last->next = curr;
        last = curr;
    }
}

int count = 0;
int getCount(Node *head)
{
    if (!head)
    {
        return count;
    }
    else
    {
        count++;
        getCount(head->next);
        return count;
    }
}

int main(int argc, char const *argv[])
{
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(1);
    cout << getCount(first);
    return 0;
}
