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
int middle = 0;
int getMiddle(Node *head)
    {
        int total = count;
        if (!head)
        {
            return count;
        }
        else
        {
        count++;
        getMiddle(head->next);    
        }
        if (total==(count/2))
        {
            middle = head->data;
        }
        return middle;
        
    }


int main(int argc, char const *argv[])
{
    insertAtEnd(78);
    print();
    cout<<endl;
    cout<<getMiddle(first);
    return 0;
}
