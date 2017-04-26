#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
using namespace std;
struct dot
{
    int w,h;
}p[6];

bool operator <(struct dot a,struct dot b)
{
    if(a.w==b.w)
        return a.h<b.h;
    else
        return a.w<b.w;
}
int main()
{
    set<int> s;
    while(cin>>p[0].w>>p[0].h>>p[1].w>>p[1].h>>p[2].w>>p[2].h>>p[3].w>>p[3].h>>p[4].w>>p[4].h>>p[5].w>>p[5].h)
    {
        int ok=1;
        s.clear();
        for(int i=0;i<6;i++)
        {
            if(p[i].w>p[i].h)
                 swap(p[i].w,p[i].h);
            s.insert(p[i].w);
            s.insert(p[i].h);
        }
        if(s.size()>3)
            ok=0;
        else
        {
            sort(p,p+6);
            if(memcmp(p,p+1,sizeof(dot))||memcmp(p+2,p+3,sizeof(dot))||memcmp(p+4,p+5,sizeof(dot)))
                ok=0;
            if(p[0].w!=p[2].w||p[0].h!=p[4].w||p[2].h!=p[4].h)
                ok=0;
        }
        if(ok)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;

    }
    return 0;
}