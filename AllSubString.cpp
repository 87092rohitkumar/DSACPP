#include<bits/stdc++.h>
using namespace std;

void subString(string s, int n)
{
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			cout << s.substr(i, len) << endl;
}


int main()
{
	string s = "abcd";
	subString(s,s.length());
	return 0;
}
 //   2nd Method
 void subString1(char str[], int n) 
{
    
    for (int len = 1; len <= n; len++) 
    {    
        
        for (int i = 0; i <= n - len; i++) 
        {
            int j = i + len - 1;            
            for (int k = i; k <= j; k++) 
                cout << str[k];
              
            cout << endl;
        }
    }
}
  

int main() 
{
    char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}