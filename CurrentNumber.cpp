    #include<iostream>
    using namespace std;
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans;
        int count=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(arr[i]<arr[j])
                count++;

            }
            ans.pus_back(count);

        }
        return ans;
    }
      
int main()
{
    vector<int>arr = {1,2,1,3,4,5,2};
     smallerNumbersThanCurrent(arr);

    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}
