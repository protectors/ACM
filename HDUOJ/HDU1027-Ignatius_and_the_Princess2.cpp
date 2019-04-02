#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a[1050];
    int i,n,m;

    while(cin>>n>>m)
    {
        memset(a,0,sizeof(a));
        for(i=0;i<1050;i++)
        a[i]=i+1;
        while((--m)&&next_permutation(a,a+n));
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<a[i]<<endl;
    }
	return 0;
}
