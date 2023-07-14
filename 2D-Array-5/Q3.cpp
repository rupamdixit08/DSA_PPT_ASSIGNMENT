class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l=0;
        int r= nums.size()-1;
        int k= nums.size()-1;
        while(k >= 0)
        {
            if(abs(nums[l]) > abs(nums[r]))
            {
                res[k]=(nums[l] * nums[l]);
                k--;
                l++;
            }
            else
            {
                res[k] = (nums[r] * nums[r]);
                r--;
                k--;
            }
        }
        return res;
    }
};
