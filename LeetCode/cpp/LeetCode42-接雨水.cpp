//给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。 
//
// 
//
// 示例 1： 
//
// 
//
// 
//输入：height = [0,1,0,2,1,0,1,3,2,1,2,1]
//输出：6
//解释：上面是由数组 [0,1,0,2,1,0,1,3,2,1,2,1] 表示的高度图，在这种情况下，可以接 6 个单位的雨水（蓝色部分表示雨水）。 
// 
//
// 示例 2： 
//
// 
//输入：height = [4,2,0,3,2,5]
//输出：9
// 
//
// 
//
// 提示： 
//
// 
// n == height.length 
// 0 <= n <= 3 * 104 
// 0 <= height[i] <= 105 
// 
// Related Topics 栈 数组 双指针 动态规划 
// 👍 2194 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxL=0,maxR=0;
        int res=0;
        while(l<r){
            if(height[l]<height[r]){
                if(maxL<height[l]){
                    maxL=height[l];
                }else{
                    res+=min(maxL, height[r])-height[l];
                }
                l++;
            }else{
                if(maxR<height[r]){
                    maxR=height[r];
                }else{
                    res+=min(maxR, height[l])-height[r];
                }
                r--;
            }
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
