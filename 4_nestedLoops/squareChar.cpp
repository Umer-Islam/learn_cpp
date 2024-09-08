#include <iostream>

using namespace std;

int main()
{
    int lines = 5;
    int characters = 7;
    for (int i = 0; i < lines; i++)
    {
        char ch = 'A';
        for (int j = 0; j < characters; j++)
        {
            cout << ch<< " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}