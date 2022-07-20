#include <iostream>
using namespace std;

struct List
{
    int data;
    List *next;
    List()
    {
        data = 0;
        next = NULL;
    }
    List(int data)
    {
        this->data = data;
        next = NULL;
    }
};

List *first = NULL;
List *last = NULL;

void insertAtStart(int data)
{

    List *curr = new List(data);
    if (!first)
    {
        first = last = curr;
    }
    else
    {
        curr->next = first;
        first = curr;
    }
}

void insertAtEnd(int data)
{
    List *curr = new List(data);
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

void deleteAtStart(){
    if (!first)
    {
        cout<<"\nList already empty";
    }
    else{
        first = first->next;
    }
}

void deleteAtend(){
    if (!first)
    {
        cout<<"\nList already empty";
    }
    else if (first->next==NULL){
       first = last = NULL;
    }
    else{
        List *p = first;
        while (p->next!=last)
        {
            p = p->next;
        }
        p->next = NULL;
        last = p;
    }
}

void printList()
{
    if (!first)
    {
        cout << "\nNo elements added in the linked list yet.";
    }
    else
    {
        List *p = first;
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    insertAtStart(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtStart(0);
    printList();
    return 0;
}
