#include <iostream>
using namespace std;

bool alreadyPresent(int n, int size, int unique[])
{
    for (int i = 0; i < size; i++)
    {
        if (unique[i] == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num[5] = {141, 31, 45, 141, 45};
    int unique[5] = {-1, -1, -1, -1, -1};

    int uniqueIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (!alreadyPresent(num[i], uniqueIndex, unique))
        {
            unique[uniqueIndex] = num[i];
            uniqueIndex++;
        }
    }

    cout << "Unique elements: ";
    for (int i = 0; i < uniqueIndex; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
