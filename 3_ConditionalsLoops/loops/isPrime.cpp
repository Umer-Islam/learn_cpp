#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number to check if it is prime or not" << endl;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            cout << "not Prime" << endl;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "prime ";
    }
    return 0;
}