class Solution {
public:
    vector<int> res;

    bool check(){
        int len = res.size();
        if(res.size()<3) return true;
        else{
            return (long long)res.back()==(long long)res[len-2] + (long long)res[len-3];
        }
    }

    bool dfs(string& s, int index){
        if(s.size()<=index) return res.size()>2;
        long long cur = 0;

        if(s[index]=='0'){
            res.push_back(0);
            if(check() && dfs(s, index+1)) return true;

            res.pop_back();
            return false;
        }
        
        while(index<s.size()){
            cur = cur*10+s[index++]-'0';
            if(cur>INT_MAX) return false;

            res.push_back(cur);
            if(check() && dfs(s, index)) return true;
            res.pop_back();
        }
        return false;
    }
    vector<int> splitIntoFibonacci(string S) {
        if(dfs(S,0)) return res;
        return vector<int>();
    }

};