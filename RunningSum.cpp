#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];

        }
        return nums;
          }

int main(){
    vector<int>nums = {1,2,1,3,4,5,2};
        runningSum(nums);

    for(int i=0;i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    
}
