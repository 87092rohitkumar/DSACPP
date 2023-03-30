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
void waveTraversalLeftRight(vector<vector<int>> &res){
    int m = res.size();
    int n = res[0].size();
    for(int i=0;i<m;i++){
        if(i%2 == 0){
            for(int j=0;j<n;j++){
                cout<<res[i][j]<<" ";
            }
        } else {
            for(int j=n-1;j>=0;j--){
                cout<<res[i][j]<<" ";
            }
        }
    }

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
    waveTraversalLeftRight(res);
    return 0;
}