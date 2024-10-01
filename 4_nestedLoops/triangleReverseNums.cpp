#include <iostream>
using namespace std;
/*
1
21
321
4321 */

int main()
{

    int rows = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j >= 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}