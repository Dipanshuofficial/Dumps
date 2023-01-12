class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=nums.size()-1;i>=0;i--){
            mp[nums[i]]=i;
        }
        int f;
        for(int j=0;j<nums.size();j++){
            f=target-nums[j];
            if(j!=mp[f]){
                return {j,mp[f]};
            }
        }
        return {-1,-1};
    }
};
