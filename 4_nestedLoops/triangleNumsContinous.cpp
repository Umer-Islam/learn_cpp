#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int initial = 1;

        for (int j = 0; j < i + 1; j++)
        {
            cout << initial << " ";
            initial++;
        }
        cout << endl;
        }

    return 0;
}