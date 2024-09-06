#include <iostream>
using namespace std;

int main()
{
    int lines = 4;
    int stars = 2;
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= stars; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}