#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn=40000; //  ×¢Òâ¡£¡£
struct bign
{
    int len,s[maxn];
    bign()
    {
        memset(s,0,sizeof(s));
        len=1;
    }
    bign(int num)
    {
        *this=num;
    }
    bign(const char *num)
    {
        *this=num;
    }
    bign operator = (const int num)
    {
        char s[maxn];
        sprintf(s,"%d",num);
        *this=s;
        return *this;
    }
    bign operator = (const char *num)
    {
        len=strlen(num);
        for(int i=0;i<len;i++)
            s[i]=num[len-i-1]-'0';
        return *this;
    }
    //Êä³ö
    string str() const
    {
        string res="";
        for(int i=0;i<len;i++)
        {
            res=(char)(s[i]+'0')+res;
        }
        if(res=="")
            res="0";
        return res;
    }
    void clean()
    {
        while(len>1&&!s[len-1])
            len--;
    }
    bign operator + (const bign &b) const
    {
        bign c;
        c.len=0;
        for(int i=0,g=0;g||i<max(len,b.len);i++)
        {
            int x=g;
            if(i<len) x+=s[i];
            if(i<b.len) x+=b.s[i];
            c.s[c.len++]=x%10;
            g=x/10;
        }
        return c;
    }
    bign operator - (const bign& b) const
    {
        bign c;
        c.len=0;
        for(int i=0,g=0;i<len;i++)
        {
            int x=s[i]-g;
            if(i<b.len) x-=b.s[i];
            if(x>=0)
                g=0;
            else
            {
                g=1;
                x+=10;
            }
            c.s[c.len++]=x;
        }
        c.clean();
        return c;
    }
    bign operator * (const bign& b) const
    {
        bign c;
        c.len=len+b.len;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<b.len;j++)
                c.s[i+j]+=s[i]*b.s[j];
        }
        for(int i=0;i<c.len-1;i++)
        {
            c.s[i+1]+=c.s[i]/10;
            c.s[i]%=10;
        }
        c.clean();
        return c;
    }
    bign operator / (const bign &b)const
    {
        bign ret,cur=0;
        ret.len=len;
        for(int i=len-1;i>=0;i--)
        {
            cur=cur*10;
            cur.s[0]=s[i];
            while(cur>=b)
            {
                cur-=b;
                ret.s[i]++;
            }
        }
        ret.clean();
        return ret;
    }
    bign operator %(const bign &b) const
    {
        bign c=*this/b;
        return *this-c*b;
    }
    bool operator <(const bign& b) const
    {
        if(len!=b.len) return len<b.len;
        for(int i=len-1;i>=0;i--)
            if(s[i]!=b.s[i])
                return s[i]<b.s[i];
        return false;
    }
    bool operator >(const bign& b) const
    {
        return b < *this;
    }
    bool operator <=(const bign& b) const
    {
        return !(b < *this);
    }
    bool operator >=(const bign& b) const
    {
        return !(*this <b);
    }
    bool operator ==(const bign& b) const
    {
        return !(b< *this)&&!(*this<b);
    }
    bool operator !=(const bign& b) const
    {
        return *this >b || *this <b;
    }
    bign operator +=(const bign& b)
    {
        *this= *this + b;
        return *this;
    }
    bign operator -=(const bign& b)
    {
        *this= *this - b;
        return *this;
    }
    bign operator *=(const bign& b)
    {
        *this= *this * b;
        return *this;
    }
    bign operator /=(const bign& b)
    {
        *this= *this / b;
        return *this;
    }
    bign operator %=(const bign& b)
    {
        *this= *this % b;
        return *this;
    }
    bign factorial()const
    {
        bign result = 1;
        for (bign i = 1; i <= *this; i+=1)
            result *= i;
        return result;
    }
};
istream& operator >> (istream &in, bign& x)
{
    string s;
    in >> s;
    x = s.c_str();
    return in;
}

ostream& operator << (ostream &out, const bign& x)
{
    out << x.str();
    return out;
}
int main()
{
    bign n,ans;
    while(cin>>n)
    {
        ans=n.factorial();
        cout<<ans<<endl;
    }
}
