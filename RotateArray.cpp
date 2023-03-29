#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
    void rotate(vector<int>& nums, int k) 
    {
     int n= nums.size();
    vector<int> ans(n);
      
         for(int i=0; i<n; i++)
        
         ans[(i+k)%n] = nums[i];
        
         nums=ans;
    }
int main(){
    vector<int>nums = {1,2,1,3,4,5,2};
    int k=3;
        rotate(nums,3);

    for(int i=0;i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    
}
