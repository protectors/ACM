//UVA414
//#define OJ
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    #ifdef OJ
    	freopen("in.txt","r",stdin); //输入从in.txt
        freopen("out.txt","w",stdout);//输出到out.txt
    #endif
    int minn,n,i,j,s,ans;
    char a[15][30];
    while(cin>>n&&n)
    {
        getchar();
        minn=30;
        s=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            fgets(a[i],sizeof(a[0]),stdin);
            for(j=0;j<25;j++)
            {
                if(a[i][j]==' ')
                    ans++;
            }
            if(minn>ans)
                minn=ans;
            s+=ans;
            ans=0;
        }
        cout<<s-minn*n<<endl;
    }

    return 0;
}
