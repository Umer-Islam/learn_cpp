#include <iostream>
using namespace std;
int main()
{
    int sumEven = 0;
    int n;
    cout << "enter the range for even sum: " << endl;
    cin >> n;
    for (int i = 0; i <= n; i += 2)
    {
        sumEven += i;
    }
    cout << sumEven << endl;
    return 0;
}