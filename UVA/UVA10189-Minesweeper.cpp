//UVA10189
#include <cstdio>
#include <cstring>
int n,m;
char a[110][110];
char dir[8][2]={{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};
void print(int x,int y)
{
    int cnt=0;  //count the number of mine
    for(int i=0;i<8;i++)
    {
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        if(a[dx][dy]=='*')
            cnt++;
    }
    printf("%d",cnt);
}
int main()
{
	int kas=0;
	while(scanf("%d%d",&n,&m)!=EOF &&n+m)
	{
		memset(a,0,sizeof(a));	//一定要初始化
		getchar();
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				scanf("%c",&a[i][j]);
			getchar();
		}

		if(kas) printf("\n");
		printf("Field #%d:\n",++kas);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]=='.')
                    print(i,j);
                else
                    putchar(a[i][j]);
            }
			printf("\n");
        }
	}
	return 0;
}
