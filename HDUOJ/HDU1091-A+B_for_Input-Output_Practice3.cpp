//输入不说明有多少个Input Block,但以某个特殊输入为结束标志
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0))
    {
        cout<<a+b<<endl;
    }

    return 0;
}
