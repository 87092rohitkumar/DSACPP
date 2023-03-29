#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        
        while(start<=end)
        {
            mid=(start+end)/2;
            if(target==nums[mid])
            {
                return mid;
            } 
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else if(target>nums[mid])
            {
                start=mid+1;
            }
        }
        return -1;

    }
int main()
{
        vector<int>myArr = {7,6,-8,4,3,2,1};
        int findvlue=4;
   cout<<search(myArr,findvlue);
    // for(int i=0;i<myArr.size(); i++){
        // cout<<i<<" ";
    // }

}

    

