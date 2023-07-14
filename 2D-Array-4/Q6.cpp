class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int left=0, right=nums.size()-1;
        vector<int> arr(nums.size());
        int i=arr.size()-1;
        while(left<=right){
            int temp=max(nums[left]*nums[left],nums[right]*nums[right]);
            arr[i--]=temp;
            if(abs(nums[left])<abs(nums[right])){
                right--;
            }
            else{
                left++;
            }
        }
        return arr;
    }
};