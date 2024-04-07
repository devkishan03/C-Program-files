#include <iostream>
using namespace std;
int main()
{
    int key = 7;
    int A[9] = {2, 4, 5, 6, 3, 7, 98, 32, 35};

    for (int i = 0; i < 9; i++)
    {
        if (A[i] == key)
        {
            cout << "element found in: " << i << " position";
            return 0;
        }
    }
    cout << "element not found";
    return 0;
}