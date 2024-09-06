#include <iostream>
using namespace std;

int main()
{

    int voting_age = 18;
    int current_age;
    cout << "enter current age: "<<endl;
    cin >> current_age;

    if (current_age >= voting_age)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you cannot vote yet, minimum age required is: " << voting_age << endl;
    }
    return 0;
}