// 线性筛选法
class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime;
        vector<int> isprime(n+2, 1);
        
        for(int i=2;i<n;i++){
            if(isprime[i]) prime.push_back(i);
            for(int j=0;j<n && i*prime[j]<n;j++){
                isprime[i*prime[j]]=0;
                if(i%prime[j]==0) break;
            }
        }

        return prime.size();

    }
};