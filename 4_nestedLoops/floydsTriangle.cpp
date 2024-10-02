#include <iostream>
using namespace std;
/*
1
23
456
67810 */

int main()
{
    int rows = 4;
    int sum = 1;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << sum<< " ";
            sum++;
        }
        cout << endl;
    }

    return 0;
}