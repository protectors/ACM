class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            res = res^nums[i];
        }
        return res;
    }
};

/**
* 方法二: 哈希表
*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int res;
        for(auto [first, second]:mp){
            // cout<<first<<" "<<second<<endl;
            if(second==1) res=first;
        }
        return res;
    }
};
*/

/**
 * 方法三: 集合(python3)
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        return sum(set(nums))*2 - sum(nums)
 */

