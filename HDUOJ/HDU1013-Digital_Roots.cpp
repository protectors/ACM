#include<iostream>
#include<string>
using namespace std;
int fun(int n)
{
	int s=0;
	while(n)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main()
{
	int i,sum;
	string s;
	while(cin>>s&&s!="0")
	{
		sum=0;
		for(i=0;i<s.length();i++)
			sum+=s[i]-'0';
		while(sum>=10)
			sum=fun(sum);
		cout<<sum<<endl;

	}
	return 0;
}
//测试数据可能是大数，需用字符串存放。