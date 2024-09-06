#include <iostream>
using namespace std;

int main()
{
    int multiple = 1;
    int factorial = 17;
    for (int i = 1; i <= factorial; i++)
    {
        multiple *= i;
    }
    if (multiple == 0 || multiple < 0)
    {
        cout << "factorial cannot be stored in: int variable" << endl;
    }
    else
    {
        cout << multiple << endl;
    }
    return 0;
}