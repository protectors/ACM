//给定一个二叉树，返回它的 后序 遍历。 
//
// 示例: 
//
// 输入: [1,null,2,3]  
//   1
//    \
//     2
//    /
//   3 
//
//输出: [3,2,1] 
//
// 进阶: 递归算法很简单，你可以通过迭代算法完成吗？ 
// Related Topics 栈 树 深度优先搜索 二叉树 
// 👍 621 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1,s2;
        TreeNode *p;
        vector<int> res;
        if(root!=NULL){
            s1.push(root);
            while(!s1.empty()){
                p=s1.top();
                s1.pop();
                s2.push(p);
                if(p->left) s1.push(p->left);
                if(p->right) s1.push(p->right);
            }
            while(!s2.empty()){
                p=s2.top();
                s2.pop();
                res.push_back(p->val);
            }
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
