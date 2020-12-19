class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int res=1;
        int cur=0, pre=0;
        for(int i=1;i<nums.size();i++){
            cur = nums[i]-nums[i-1];
            if(cur>0 && pre<=0 || (cur<0 && pre>=0)){
                res++;
                pre=cur;
            }
        }
        return res;
    }
};