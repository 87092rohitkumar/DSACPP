#include<iostream>
using namespace std;
int main()
{
    int num,divisor,rem=0,queo=0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Enter the divisor "<<endl;
    cin>>divisor;

    rem=num%divisor;
    queo=num/divisor;
     
     cout<<"Remainder of the number is ="<<rem<<endl;
     cout<<"Quotient of the number is = "<<queo;
     return 0;

}