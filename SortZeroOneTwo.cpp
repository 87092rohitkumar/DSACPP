#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort(vector<int>&nums)
{
// int n=nums.size();
// int zero=0,one=0,two=0;
//  for(int i=0;i<=n;i++)
//  {
//     zero+=(nums[i]==0);
//     one+=(nums[i]==1);
//     two+=(nums[i]==2);
//  }
         
//         for(int i=0;i<n;i++)
//         {
//             if(zero>0)nums[i]=0,zero--;

//             else if(one>0)nums[i]=1,one--;

//             else nums[i]=2;

// }
int high=nums.size()-1;
int low=0,mid=0;
while(high<=low)
{
    switch(nums[mid])
    {
        case 0:
        swap(nums[low++],nums[mid++]);
        break;

        case 1:
        mid++;

        break;
    case 2:
        swap(nums[mid],nums[high--]);
        break;
    
    }
}

 }

int main(){
    vector<int>nums = {0,0,1,2,2,1,0,2,0,1};
        //sort(nums);

    for(int i=0;i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    
}

