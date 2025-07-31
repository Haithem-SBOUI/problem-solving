class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int l=0;
        int r=nums.size() - 1;
        vector<int> ans;
        while(l<r){
            if(nums[l] + nums[r] > target)
                r--;
            else if(nums[l] + nums[r] < target)
                l++;
            else{
                ans[0]=l;
                ans.push_back(r);
            }
        }
        return ans;
    }
};