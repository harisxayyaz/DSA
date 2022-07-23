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
Node *head2 = NULL;
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
    if (!head2)
    {
        head2 = curr;
    }
    else
    {
        Node *p = head2;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = curr;
    }
}

Node *commonHead = NULL;
void insertCommon(int data)
{
    Node *curr = new Node(data);
    if (!commonHead)
    {
        commonHead = curr;
    }
    else
    {
        Node *p = commonHead;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = curr;
    }
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

int temp = -1;
int prev1 = -1;
int prev2 = -1;
int follow = -1;
int intersectPoint(Node *head1, Node *head2)
{
    if (head1 != NULL || head2 != NULL)
    {
        if (head1 == NULL)
        {
            intersectPoint(NULL, head2->next);
            prev2 = head2->data;
        }
        else if (head2 == NULL)
        {
            intersectPoint(head1->next, NULL);
            prev1 = head1->data;
        }
        else
        {

            intersectPoint(head1->next, head2->next);
            prev1 = head1->data;
            prev2 = head2->data;
        }
    }
    if (prev1==prev2)
    {
        follow = prev1;
    }
    cout<<prev1;
    cout<<prev2;
    cout<<endl;
    return follow;
}

int main(int argc, char const *argv[])
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd2(4);
    insertAtEnd2(5);
    insertAtEnd2(6);
    insertCommon(100);
    insertCommon(200);

    //
    Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = commonHead;

    Node *q = head2;
    while (q->next != NULL)
    {
        q = q->next;
    }
    //

    q->next = commonHead;
    print(first);
    cout << endl;
    print(head2);
    cout << endl;
    cout << intersectPoint(first, head2);
    return 0;
}
