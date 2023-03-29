#include<iostream>
int main()
{
    int a,b,c;
    cout<<"Enter the all three number"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Greater number is"<<a;
    }
    else if (b>c&&b>a)
    {
        cout<<"Greater number is"<<b;
    }
    else {
        cout<<"Greater number is"<<c;
    }
}