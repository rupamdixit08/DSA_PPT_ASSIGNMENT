class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int lastPeak = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || nums[i] > nums[i-1])
            {
                lastPeak = i-1;
            }
        }
        if(lastPeak == -1)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int nextGreaterIdx = 0 , minM = INT_MAX;
        for(int i=nums.size()-1;i>lastPeak;i--)
        {
            if(nums[i] > nums[lastPeak] && nums[i] < minM)
            {
                nextGreaterIdx = i;
                minM = nums[i];
            }
        }
        swap(nums[lastPeak] , nums[nextGreaterIdx]);
        sort(nums.begin() + lastPeak + 1 , nums.end());
    }
};