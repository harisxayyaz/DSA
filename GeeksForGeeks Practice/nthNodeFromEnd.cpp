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

int count = 0;
int total = 0;
int ret = -1;
int getNthFromLast(Node *head, int n)
{
    int val = count;
    if (!head)
    {
        total = count;
    }
    else{
        count++; 
        getNthFromLast(head->next,n);
    }
    if ((total-val)==n)
    {
        ret = head->data;
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    insertAtEnd(667);
    insertAtEnd(299);
    insertAtEnd(35);
    insertAtEnd(664);
    print();
    cout<<endl;
    cout<<getNthFromLast(first,6);
    return 0;
}
