#include <iostream>
using namespace std;
// sum all multiples of 3  from 1 to n,
int main()
{
    int n = 12;
    int sumDivBy3 = 0;
    for (int i = 0; i <= n; i++)
    {
        if(i%3 ==0){
            sumDivBy3 +=i;
        }
    }
    cout<< sumDivBy3<<endl;
    return 0;
}