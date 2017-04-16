//UVA1225
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <list>
#include <cstring>
using namespace std;

int s[10001][10];
int main()
{
    int i,j,t,n,temp;
    for(i=1;i<10000;i++)
    {
        for(j=0;j<10;j++)
        {
            s[i][j]=s[i-1][j];
        }
        temp=i;
        while(temp)
        {
            s[i][temp%10]++;
            temp/=10;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<9;i++)
            cout<<s[n][i]<<" ";
        cout<<s[n][9]<<endl;

    }
    return 0;
}
