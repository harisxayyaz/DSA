#include <iostream>
using namespace std;

void deleteNode(Node *del)
{
    if (!del)
    {
        return;
    }
    else
    {
        del->data = del->next->data;
        del->next = del->next->next;
        del->next->next = NULL;
    }
}

int main(int argc, char const *argv[])
{
    return 0;
}
