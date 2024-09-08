#include <iostream>

using namespace std;

int main()
{
    int lines = 5;
    int countTill = 5;
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= countTill; j++)
        {
            cout << j<< " ";
            
        }
        cout << endl;
    }
    return 0;
}