//UVA494
#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char s[1005];
    while(gets(s))
    {
        int ans=0;
        for(int i=0;i<strlen(s);i++)
            if(isalpha(s[i])&&!isalpha(s[i+1]))
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}
//sstream��ѡ�����ʺ��޷�ȷ�������е�abc���Լ�b2����ĸ�д��������ַ������
