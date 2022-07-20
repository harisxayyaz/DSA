#include <iostream>
#include <map>
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

void print(){
    Node *p = first;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}


bool detectLoop(Node* head)
    {
        Node* slowPointer=head;
        Node* fastPointer=head;
        while(fastPointer && fastPointer->next){
            slowPointer=slowPointer->next;
            fastPointer=fastPointer->next->next;
            if(fastPointer==slowPointer){
                return 1;
            }
        }
        return 0;
    }

int main(int argc, char const *argv[])
{
    insertAtEnd(7);
    insertAtEnd(58);
    insertAtEnd(36);
    insertAtEnd(34);
    insertAtEnd(16);
    Node *p = first;

    //creating a loop here 
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next=first->next;  
    //  
    cout<<detectLoop(first);
    return 0;
}
