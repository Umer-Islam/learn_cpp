#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "enter a number" << endl;
    cin >> input;
    cout << ((input >= 0) ? "positive" : "negative");
    return 0;
}