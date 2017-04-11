//UVA340
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <map>
using namespace std;


int main()
{
    int a[1010],b[1010];
    int n,i,t=1;
    int A,B;
    while(cin>>n&&n)
    {
        map<int,int> q;
        cout<<"Game "<<t++<<":\n";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            q[a[i]]++;
        }
        while(1)
        {
            map<int,int>p;
            A=B=0;
            for(i=0;i<n;i++)
            {
                cin>>b[i];
                p[b[i]]++;
                if(a[i]==b[i])
                    A++;
            }
            if(b[0]==0)
                break;
            for(i=1;i<=9;i++)
                B+=min(p[i],q[i]);
            printf("    (%d,%d)\n",A,B-A);

        }
    }
    return 0;
}
