#include <iostream>
using namespace std;

int main()
{

    int rows;
    int n=4;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {

        for (int j =1; j<=rows*2-1; j++)
        {
            if(j==1||j==rows||i==rows)
            cout <<"1";
        }
         cout<<endl;
    }
        return 0;
    }
