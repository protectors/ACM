//实现 strStr() 函数。 
//
// 给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如
//果不存在，则返回 -1。 
//
// 示例 1: 
//
// 输入: haystack = "hello", needle = "ll"
//输出: 2
// 
//
// 示例 2: 
//
// 输入: haystack = "aaaaa", needle = "bba"
//输出: -1
// 
//
// 说明: 
//
// 当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。 
//
// 对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与C语言的 strstr() 以及 Java的 indexOf() 定义相符。 
// Related Topics 双指针 字符串 
// 👍 763 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int strStr(string haystack, string needle) {

        if(needle=="") return 0;

        int slen = haystack.size(), plen = needle.size();
        int* next = new int[plen+1];

        int i=0,j=-1;
        next[0]=-1;
        while(i<plen){
            if(j==-1 || needle[j]==needle[i]){
                i++; j++;
                next[i]=j;
            }else{
                j=next[j];
            }
        }

        i=0,j=0;
        while(i<slen && j<plen){
            if(j==-1 || haystack[i]==needle[j]){
                i++; j++;
            }else j=next[j];
        }
        if(j>=plen) return i-plen;
        else return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
