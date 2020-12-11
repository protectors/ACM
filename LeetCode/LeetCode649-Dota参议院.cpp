class Solution {
public:
    string predictPartyVictory(string senate) {
        int len=senate.size();
        queue<int> dq,rq;
        int res=0;
        for(int i=0;i<len;i++){
            if(senate[i]=='R') rq.push(i);
            else dq.push(i);
        }
        while(!rq.empty() && !dq.empty()){
            int r = rq.front(), d = dq.front();
            if(r<d){
                r+=len;
                rq.push(r);
            }else{
                d+=len;
                dq.push(d);
            }
            rq.pop();
            dq.pop();
        }
        
        if(rq.size()>dq.size()) return "Radiant";
        else return "Dire";
    }
};