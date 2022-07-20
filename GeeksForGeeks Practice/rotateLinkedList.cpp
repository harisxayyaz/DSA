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

Node *rotate(Node *head, int k)
{   
    Node *tempList = NULL;
    Node *tempHead = NULL;
    Node *p = head;
    int count = 0;
    while (p->next!=NULL)
    {
        count++;
        tempList = p;
        p = p->next;
        if (count==k)
        {
            tempHead = tempList->next;
            tempList->next=NULL;
        }
    }
    p->next = head;
    if (!tempHead)
    {
         p->next = NULL;
        return head;
    }
    return tempHead;
}

void print(){
    Node *p = first;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}

int main(int argc, char const *argv[])
{
    insertAtEnd(9);
    insertAtEnd(8);
    insertAtEnd(6);
    insertAtEnd(19);
    insertAtEnd(12);
    insertAtEnd(3);
    insertAtEnd(26);
    insertAtEnd(18);
    insertAtEnd(5);
    print();
    cout<<endl;
    first = rotate(first,2);
    print();
    return 0;
}
