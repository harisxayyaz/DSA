#include <iostream>
#include <vector>
using namespace std;



vector<int> minPartition(int N)
{
    int curr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int total = 0;
    int i = 9;
    int rem = N;
    vector<int> min;
    while (total != N)
    {
        if (rem >= curr[i])
        {
            total += curr[i];
            min.push_back(curr[i]);
            rem = N - total;
        }
        else
        {
            i--;
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    vector<int> a = minPartition(1000);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << ' ';
    }
    return 0;
}
