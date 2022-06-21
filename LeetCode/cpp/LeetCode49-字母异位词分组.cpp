class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string> > res;

        for(int i=0;i<strs.size();i++){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(strs[i]);
        }

        for(auto it=mp.begin(); it!=mp.end();it++){
            res.push_back(it->second);
        }
        
        return res;
    }
};