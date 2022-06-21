//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。 
//
// 有效字符串需满足： 
//
// 
// 左括号必须用相同类型的右括号闭合。 
// 左括号必须以正确的顺序闭合。 
// 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "()"
//输出：true
// 
//
// 示例 2： 
//
// 
//输入：s = "()[]{}"
//输出：true
// 
//
// 示例 3： 
//
// 
//输入：s = "(]"
//输出：false
// 
//
// 示例 4： 
//
// 
//输入：s = "([)]"
//输出：false
// 
//
// 示例 5： 
//
// 
//输入：s = "{[]}"
//输出：true 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 104 
// s 仅由括号 '()[]{}' 组成 
// 
// Related Topics 栈 字符串 
// 👍 2496 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n%2==1) return false;
        unordered_map<char, char> pairs={
                {')', '('},
                {']', '['},
                {'}', '{'}
        };
        stack<char> stk;
        for(char ch:s){
            if(pairs.count(ch)){
                if(stk.empty()||stk.top()!=pairs[ch]) return false;
                stk.pop();
            }else{
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)
