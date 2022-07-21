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

Node *tempHead = NULL;
Node *lastPointer = NULL;
Node *reverseList(Node *head)
{
    if (head == NULL)
    {
        tempHead->next = NULL;
        return tempHead;
    }
    else
    {
        tempHead = head;
        reverseList(head->next);
    }
    if (tempHead==head)
    {
        return tempHead;
    }
    else if (tempHead->next == NULL)
    {
        lastPointer = head;
        tempHead->next = lastPointer;
    }
    else
    {
        lastPointer->next = head;
        lastPointer = head;
        lastPointer->next = NULL;
    }
    return tempHead;
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
    insertAtEnd(1);
    // insertAtEnd(2);
    // insertAtEnd(3);
    print(first);
    cout << endl;
    Node *reverse = reverseList(first);
    print(reverse);
    return 0;
}
