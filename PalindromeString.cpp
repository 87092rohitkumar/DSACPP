#include<iostream>
#include <string.h>
using namespace std;


void isPalindrome(char s[])
{
    
	int low = 0;
	int high = strlen(s) - 1;

    
	while (low<=high)
	{
		if (s[low++] != s[high--])
		{
              
			cout << "No";
			return;
		}
	}
     
	cout<<"Yes";
}

int main()
{
    
	isPalindrome("Madam");
	return 0;
}

