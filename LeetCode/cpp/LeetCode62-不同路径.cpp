class Solution {
public:
    const int mod = 2e9;
    long long c[105][105];
    void init(){
	for(int i=0;i<105;i++)
		for(int j=0;j<=i;j++){
			if(j==0) c[i][j]=1;
			else c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
    }
    int uniquePaths(int m, int n) {
        init();
        return c[m+n-2][m-1];
    }
};