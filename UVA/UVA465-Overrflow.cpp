#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn=40000;

struct Bign{
    int len,s[maxn];
    Bign(){ memset(s,0,sizeof(s));len=1;}
    Bign(int num){ *this=num;}
    Bign(const char *num) {*this=num;}
    Bign operator = (const int num){
        char s[maxn];
        sprintf(s,"%d",num);
        *this=s;
        return *this;
    }
    Bign operator = (const char *num){
        len=strlen(num);
        for(int i=0;i<len;i++) s[i]=num[len-i-1]-'0';
        return *this;
    }
    //output
    string str() const{
        string res="";
        for(int i=0;i<len;i++) res=(char)(s[i]+'0')+res;
        if(res=="") res="0";
        return res;
    }
    void clean(){ while(len>1&&!s[len-1]) len--;}
    Bign operator + (const Bign &b) const{
        Bign c;
        c.len=0;
        for(int i=0,g=0;g||i<max(len,b.len);i++){
            int x=g;
            if(i<len) x+=s[i];
            if(i<b.len) x+=b.s[i];
            c.s[c.len++]=x%10;
            g=x/10;
        }
        return c;
    }
    Bign operator - (const Bign& b) const{
        Bign c;
        c.len=0;
        for(int i=0,g=0;i<len;i++){
            int x=s[i]-g;
            if(i<b.len) x-=b.s[i];
            if(x>=0) g=0;
            else { g=1;x+=10;}
            c.s[c.len++]=x;
        }
        c.clean();
        return c;
    }
    Bign operator * (const Bign& b) const{
        Bign c;
        c.len=len+b.len;
        for(int i=0;i<len;i++){
            for(int j=0;j<b.len;j++) c.s[i+j]+=s[i]*b.s[j];
        }
        for(int i=0;i<c.len-1;i++){
            c.s[i+1]+=c.s[i]/10;
            c.s[i]%=10;
        }
        c.clean();
        return c;
    }
    Bign operator / (const Bign &b)const{
        Bign ret,cur=0;
        ret.len=len;
        for(int i=len-1;i>=0;i--){
            cur=cur*10;
            cur.s[0]=s[i];
            while(cur>=b){
                cur-=b;
                ret.s[i]++;
            }
        }
        ret.clean();
        return ret;
    }
    Bign operator %(const Bign& b) const{ Bign c=*this/b; return *this-c*b;}
    bool operator <(const Bign& b) const{
        if(len!=b.len) return len<b.len;
        for(int i=len-1;i>=0;i--)
            if(s[i]!=b.s[i]) return s[i]<b.s[i];
        return false;
    }
    bool operator > (const Bign& b) const { return b < *this;}
    bool operator <=(const Bign& b) const { return !(b < *this);}
    bool operator >=(const Bign& b) const { return !(*this <b);}
    bool operator ==(const Bign& b) const { return !(b< *this)&&!(*this<b);}
    bool operator !=(const Bign& b) const { return *this >b || *this <b; }
    Bign operator +=(const Bign& b) { *this= *this + b; return *this; }
    Bign operator -=(const Bign& b) { *this= *this - b; return *this; }
    Bign operator *=(const Bign& b) { *this= *this * b; return *this; }
    Bign operator /=(const Bign& b) { *this= *this / b; return *this; }
    Bign operator %=(const Bign& b) { *this= *this % b; return *this; }
    Bign factorial()const{
        Bign result = 1;
        for (Bign i = 1; i <= *this; i+=1) result *= i;
        return result;
    }
};

istream& operator >> (istream &in, Bign& x){
    string s;
    in >> s;
    x = s.c_str();
    return in;
}

ostream& operator << (ostream &out, const Bign& x){
    out << x.str();
    return out;
}

int main(){
    Bign a,b,c,inf;
    inf="2147483647";
    string op;
    while(cin>>a>>op>>b){
        cout<<a<<" "<<op<<" "<<b<<endl;
        a.clean();b.clean();
        if(a>inf) cout<<"first number too big\n";
        if(b>inf) cout<<"second number too big\n";
        if(op=="+") c=a+b;
        else c=a*b;
        if(c>inf) cout<<"result too big\n";
    }
    return 0;
}
