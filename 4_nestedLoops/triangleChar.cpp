#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    char value = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << value << " ";
        }
        cout << endl;
        value++;
    }

    return 0;
}