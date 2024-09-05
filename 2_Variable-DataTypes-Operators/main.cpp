#include <iostream>
using namespace std;

int main()
{

    // print statement
    cout << "...hello world..." << endl;
    // print size of a variable in bytes
    int a;
    a = 34;
    cout << "size of a: " << sizeof(a)<<endl;

    // size of a float variable
    float b;
    b = 45.454545454545469876987698776;
    cout << "\n size of b:" << sizeof(b)<<endl;

    // user input
    int num1;
    cout << "enter a number: "<< endl;
    cin >> num1;
    cout << "number you entered: "<< num1<< endl;

    return 0;
}