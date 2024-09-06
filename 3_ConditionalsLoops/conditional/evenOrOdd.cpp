#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    // put  n==0 first else it gives 0%2 ==0 making it even
    if (n == 0)
    {
        cout << n << " is neither even nor odd";
    }
    else if (n % 2 == 0)
    {
        cout << n << " is even"<<endl;
    }
    else
    {
        cout << n << " is odd"<< endl;
    }

    return 0;
}
