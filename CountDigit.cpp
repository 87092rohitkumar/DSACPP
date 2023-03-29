#include<iostream>

using namespace std;
int main()
{
   int num, count=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      count++;
      num = num/10;
   }
   cout<<"\n Total Number of digit are present in Number  = "<<count;
   cout<<endl;
   return 0;
}
