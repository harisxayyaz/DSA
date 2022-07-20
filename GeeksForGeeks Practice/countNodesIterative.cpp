#include <iostream>
using namespace std;

int getCount(struct Node *head)
{
    if (!head)
    {
        return 0;
    }
    else
    {
        int count = 0;
        Node *p = head;
        while (p != NULL)
        {
            count++;
            p = p->next;
        }
        return count;
    }
}

int main(int argc, char const *argv[])
{
    return 0;
}
