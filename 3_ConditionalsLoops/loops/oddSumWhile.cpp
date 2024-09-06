#include <iostream>
using namespace std;
int main()
{
    int sumOdd = 0;
    int integers = 1;
    while (integers <= 5)
    {
        if (integers % 2 != 0)
        {
            sumOdd += integers;
        }
        integers++;
    }
    cout << sumOdd << endl;
    return 0;
}