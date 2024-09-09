#include <iostream>

using namespace std;

int main()
{
    int lines = 4;
    int startFrom = 1;
    int count = 3;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << startFrom << " ";
            startFrom++;
        }
        cout << endl;
    }
    return 0;
}