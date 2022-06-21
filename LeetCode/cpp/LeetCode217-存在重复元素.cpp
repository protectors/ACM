class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        map<int, int> mp;
        for(int i=0;i<len;i++){
            if(mp[nums[i]]) return true;
            mp[nums[i]] = 1;
        }
        return false;
    }
};