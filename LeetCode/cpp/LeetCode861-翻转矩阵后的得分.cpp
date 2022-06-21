class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int m=A.size(), n=A[0].size();
        int ret = m * (1 << (n-1));
        for(int i=1;i<n;i++){
            int tmp = 0;
            for(int j=0;j<m;j++){
                if(A[j][0] == 1) tmp += A[j][i];
                else tmp += !A[j][i];
            }
            int k = max(tmp, m-tmp);
            ret += k * (1<< (n-i-1));
        }
        return ret;
    }
};

