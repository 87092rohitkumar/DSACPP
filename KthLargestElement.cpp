#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//     vector<int>sortedKth(vector<int>& nums,int k) {
        
//                 sort(begin(nums), end(nums));

//         {
//                 return nums[nums.size()-k];

//         }
//     }
// int main(){
//     vector<int>nums = {3,2,3,1,2,4,5,5,6};
//     int k=4;
//     // int n=sizeof(arr)/sizeof(arr[0]);
//    cout<<sortedKth(nums,k);

//     // for(int i=0;i<nums.size(); i++){
//     //     cout<<nums[i]<<" ";
//     // }
//     // return 0;
    
// }

int kth_largest_element(int arr[], int k, int n){  
    // Sorts the array  
    sort(arr, arr + n);  
  
    // Reverses the array  
    reverse(arr, arr+n);  
  
    // Returns the required element  
    return arr[k-1];  
}  
  
int main(){  
    // Given array  
    int arr[] = {12, 15, 7, 3, 8, 16, 25};  
  
    // n represents the size of the array  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    int k = 3;  
    cout << "The "<< k << "th largest element = " << kth_largest_element(arr, k, n) << endl;  
    return 0;  
}  

