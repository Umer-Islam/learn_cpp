#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int initial = 1;
        for (int j = i + 1; j < 0; j++)
        {
            cout << n;
            initial++;
        }
        cout << endl;
    }
    return 0;
}