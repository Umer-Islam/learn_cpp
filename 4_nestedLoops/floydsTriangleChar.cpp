#include <iostream>
using namespace std;
/*
A
BC
DEF
GHIJ */
int main()
{
    char initial = 'A';
    int rows = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << initial;
            initial++;
        }
        cout << endl;
    }
    return 0;
}