class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_set<int> uset;
        int sum = nums.size()*(nums.size()+1)/2;
        int target = 0;
        for (int i=0; i<nums.size(); i++) {
            sum-=nums[i];
            uset.insert(nums[i]);

            // !target so that after setting the value of target once,
            //  we don't keep updating the value of target again & again
            if (!target && uset.size()==i) {
                target=nums[i];
            }
        }

        return {target, (target+sum)};
    }
};