#include <iostream>
using namespace std;

int main() 
{

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j =rows; j >= i; --j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
