#include<iostream>
using namespace std;
int main()
{
    int num, i, temp=0;
    cout<<"Enter a Number: ";
    cin>>num;
    for(i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp==0)
        cout<<"\n Number is Prime Number";
    else
        cout<<"\n Number is not  Prime Number";
    cout<<endl;
    return 0;
}
