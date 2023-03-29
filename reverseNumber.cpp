#include<iostream>
using namespace std;
int main()
{
    int number,rev=0,rem=0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    while(number!=0)
    {
     rem=number%10;
     rev=rev*10+rem;
     number/=10;
    }
    cout<<"Reverse of the nuymber is "<<rev<<endl;
    return 0;
}