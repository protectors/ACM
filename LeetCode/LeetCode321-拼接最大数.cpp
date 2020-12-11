class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> res(k,0);

        int start = max(0, k-n);
        int end = min(k, m);
        for(int i=start;i<=end;i++){
            vector<int> sub1 = MaxSubquence(nums1, i);
            vector<int> sub2 = MaxSubquence(nums2, k-i);
            vector<int> cur(merge(sub1, sub2));

            if(compare(cur,0, res,0) > 0 ){
                res.swap(cur);
            }
        }
        return res;
    }

    vector<int> MaxSubquence(vector<int>& nums , int k){
        int len = nums.size();
        vector<int> s(k, 0);
        int top=-1;
        int drop_num=len-k;

        for(int i=0;i<len;i++){
            while(top>=0 && s[top]< nums[i] && drop_num>0){
                --top;
                --drop_num;
            }

            if(top<k-1) s[++top] = nums[i];
            else --drop_num;
        }
        return s;
    }

    vector<int> merge(vector<int>& s1, vector<int>& s2){
        int x = s1.size();
        int y = s2.size();
        if(x==0) return s2;
        if(y==0) return s1;

        int len = x+y;
        vector<int> merged(len);
        int index1=0, index2=0;
        for(int i=0;i<len;i++){
            if(compare(s1,index1,s2,index2)>0){
                merged[i] = s1[index1++];
            }
            else merged[i] = s2[index2++];
        }
        return merged;
    }

    int compare(vector<int> sa, int index1, vector<int> sb, int index2){
        int x = sa.size();
        int y = sb.size();
        while(index1< x && index2 <y){
            int tmp = sa[index1] - sb[index2];
            if(tmp!=0) return tmp;
            index1++;
            index2++;
        }
        return (x-index1) - (y-index2);
    }
};