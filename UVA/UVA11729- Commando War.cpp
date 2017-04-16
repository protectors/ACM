//UVA11729
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

struct Job
{
    int j,b;
    bool operator < (const Job& x) const{
        return j>x.j;
    }
};
int main()
{
    int n,b,j,kase=1;
    while(cin>>n&&n)
    {
        vector<Job> v;
        for(int i=0;i<n;i++)
        {
            cin>>b>>j;
            v.push_back((Job){j,b});
        }
        sort(v.begin(),v.end());
        int s=0,ans=0;
        for(int i=0;i<n;i++)
        {
            s+=v[i].b;       //当前任务的开始时间
            ans=max(ans,s+v[i].j);  //更新任务执行完毕的最晚时间
        }
        cout<<"Case "<<kase++<<": "<<ans<<endl;
    }
    return 0;
}
