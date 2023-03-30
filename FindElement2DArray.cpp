#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void input(vector<vector<int>> &res, int m, int n)
{
    // input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> res[i][j];
        }
    }
}
bool find(vector<vector<int>> &res, int target){
    for(vector<int>vec : res){
        for(int ele: vec){
            if(ele == target){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    
    int m = 2;
    int n = 3;
    // vector<vector<int>> res(m, vector<int>(n, 0));
    // input(res,m,n);
    vector<vector<int>>res = {
      {1,2,3},
      {4,5,6},
      {7,8,9},  
    };
   cout<< find(res,10);
    return 0;
}
