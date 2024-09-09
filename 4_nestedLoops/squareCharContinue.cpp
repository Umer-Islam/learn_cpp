#include <iostream>

using namespace std;

int main()
{
    int rows = 3;
    int cols = 3;
    char startFrom = 'A'; // taking this variable as int will return ascii code.😐
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << startFrom << " ";
            startFrom++;
        }
        cout << endl;
    }
    return 0;
}