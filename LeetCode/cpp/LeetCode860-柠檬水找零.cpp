class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int len = bills.size();
        int fc=0, tc=0, res=0;
        for(int i=0;i<len;i++){
            if(bills[i]==5) fc++;
            else if(bills[i]==10) fc--, tc++;
            else if(bills[i]==20 && tc>0) fc--, tc--;
            else if(bills[i]==20 && tc==0) fc-=3;
            if(fc<0 || tc<0) return false;
        }
        return true;
    }
};