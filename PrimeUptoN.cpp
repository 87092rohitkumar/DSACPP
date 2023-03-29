#include <iostream>
using namespace std;
int main()
{
    int number,  isPrime, n;
    cout << "Enter the value of Number \n";
    cin >> number;
        for (int i = 2; i <= number; i++)
    {
        isPrime = 0;
        
            for (int j = 2; j <= i / 2; j++)
        {
        
                if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0 && number != 1)
            cout << i << " ";
    }
    return 0;
}