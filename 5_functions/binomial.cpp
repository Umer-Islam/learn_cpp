#include <iostream>

using namespace std;

// func for factoral of a given number

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

// func for calcutating nCr, the formula is  = n!/r!(n-r)!

int ncr()
{
    int n, r, c;
    cout << "enter value of n: " << endl;
    cin >> n;
    cout << "enter value of r: " << endl;
    cin >> r;
    c = factorial(n)/(factorial(r)*factorial(n-r));
    cout<< "value of C is:"<< c<< endl;
    return c;
}

// main function
int main()
{
    ncr();
    return 0;
}