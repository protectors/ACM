class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len==0) return 0;
        int i=0,j=1;
        int count=0;
        for(;i<len;i++){
            for(;j<len;j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    count++;
                    break;
                }
                
            }
        }
        return count+1;
    }
};