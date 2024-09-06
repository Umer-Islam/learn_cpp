#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "enter a character" << endl;
    cin >> character;

    if (character >= 97 && character <= 122)// implicit type conversion happens here
    {
        cout << character << " : is lowercase" << endl;
    }
    else if (character >= 65 && character <= 90)
    {
        cout << character << " : is uppercase" << endl;
    }
    else
    {
        cout << "only characters are accepted" << endl;
    }
    return 0;
}