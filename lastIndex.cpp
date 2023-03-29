#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
    int firstOccurance(vector<int>& arr, int target) 
    {
        int start=0;
        int end=arr.size()-1;
        int mid=(start+end)/2;
        
        while(start<=end)
        {
            mid=(start+end)/2;
            if(target==arr[mid])
            {
                if(mid+1<end&& arr[mid+1]==target)
                {
                    start=start+1;
                }
                else {
                return mid;
                }
            } 
            else if(target<arr[mid])
            {
                end=mid-1;
            }
            else if(target>arr[mid])
            {
                start=mid+1;
            }
        }
        return -1;

    }   
int main()
{
        vector<int>myArr = {2,8,4,4,4,7,7,7,6,8,9};
        int target=4;
   cout<<firstOccurance(myArr,target);
    // for(int i=0;i<myArr.size(); i++){
        // cout<<i<<" ";
    // }

}

    

