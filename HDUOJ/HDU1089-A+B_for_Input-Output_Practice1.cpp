//输入不说明有多少个Input Block,以EOF为结束标志。

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
        cout<<a+b<<endl;
    return 0;
}
