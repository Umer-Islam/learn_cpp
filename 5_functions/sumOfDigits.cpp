#include <iostream>
using namespace std;

int digits(int x)
{
    int digitSum = 0;
    // total size/ size of a bit
    while (x > 0)
    {
        int lastDigit = x % 10;
        cout << "last digit: " << lastDigit << endl;
        int removeLastDigit = x / 10;
        cout << "removed digit: " << removeLastDigit << endl;
        digitSum += x;
        x = x / 10;

        // cout<< lastDigit<<endl<< removeLastDigit<<endl;
    }
    return digitSum;
}

int main()
{
    int x;
    cout << "enter a number" << endl;
    cin >> x;
    cout << "sum of digits is: " << digits(x)%10 << endl;//this statement gives the last digit but does not work in some cases

    return 0;
}