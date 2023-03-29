#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

    vector<int> concatArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }

int main(){
    vector<int>nums = {3,4,5,2};
        concatArray(nums);

    for(int i=0;i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    
}
