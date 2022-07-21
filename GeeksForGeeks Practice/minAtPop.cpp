#include <iostream>
#include <bits/stdc++.h>
using namespace std;


stack<int> minStack;
int minimum = 2147483647;
stack<int> _push(int arr[], int n)
{
    stack<int> tempStack;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= minimum)
        {
            minimum = arr[i];
            minStack.push(minimum);
        }
        tempStack.push(arr[i]);
    }
    return tempStack;
}
// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    while (!s.empty())
    {
        cout << minStack.top() << " ";
        if (s.top() == minStack.top())
        {
            minStack.pop();
        }
        s.pop();
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {1, 6, 43, 1, 2, 0, 5};
    stack<int> arraySta = _push(array, 7);
    _getMinAtPop(arraySta);
    return 0;
}
