#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
    int nearestIndex(vector<int>& arr, int target) 
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
        return ((target-arr[end]<arr[start]-target))?end:start;

        // return start;

    }   
int main()
{
        vector<int>myArr = {20,30,45,67,90,55,87,54,32,21};
        int target=55;
   cout<< " "<<nearestIndex(myArr,target);
    // for(int i=0;i<myArr.size(); i++){
        // cout<<i<<" ";
    // }

}

    

