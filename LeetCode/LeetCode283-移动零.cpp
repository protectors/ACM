class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int i=0, j=0;
        while(j<len){
            if(nums[j]){
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};