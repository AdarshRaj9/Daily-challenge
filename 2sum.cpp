class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            if(mp.find(target-a)!=mp.end())
            {
                return {mp[target-a],i};
            }
            mp.insert({nums[i],i});
        }
        return {};
        
    }
};