#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the rows"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
          for(int j=1;j<=rows;j++)
          {
            if(j==1||j==rows)
            {
                cout<<" *";
            }
            else if((i>rows/2) &&((i==j)&&(i+j==rows+1)))
            {
                cout<<" *";
            }
            else {
                cout<<"  ";
            }
          }
          cout<<endl;

    }
    return 0;
}