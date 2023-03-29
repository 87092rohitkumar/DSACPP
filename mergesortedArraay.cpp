#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int k=0;
 void mergeSortedArray(vector<int>&nums1,vector<int>&nums2)
 {
    int n=nums.size();
    int m=nums.size();
    
    vector<int> ans(m+n);
    int i=0;j=0;

    while(i<n&&j<m)
    {
        
        if(nums1[i]<=nums2[j])
        {
        ans[k]=nums1[i];
        i++;
        k++;
        }
    
    else {
        ans[k]=nums2[j];
        j++;
        k++;
    }
    }
    while(i<n)
    {
        ans[k]=nums1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        ans[k]=nums2[j];
        k++;
        j++;
    }

    for(int i=0;i<k.size();i++)
    {
        cout<<" "<<k[i];
    }
    

 }
 int main()
 {
        vector<int>a = {1,2,1,3,4,5,2};

        vector<int>b = {7,5,8,9,6,4};
        int l,m;

    mergeSortedArray(a,b);
    
     for( l=0;l<=a.size();l++)
     {
        cout<<a[l];
     }
     
     for( m=0;m<=b.size();m++)
     {
        cout<<b[m];
     }


 }