//UVA537
//#define OJ
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char ch[]="PUI";
char pref[]="mkM";
char unit[]="WVA";
double rate[3]={0.001,1000.00,1000000.00};
double sum[3];
char s[1000];
char pre;
int main(){
    #ifdef OJ
    	//freopen("in.txt","r",stdin); //输入从in.txt
        //freopen("out.txt","w",stdout);//输出到out.txt
    #endif
    int t,i,j,flag,k;
    int c=1;
    double res;
    scanf("%d",&t);
    getchar();
    while(t--){
        memset(sum,0,sizeof(sum));
        gets(s);
        for(i =0; i< strlen(s); ++i){
            if(s[i+1]=='='){
                for(j=0;ch[j]!=s[i];j++);
                sscanf(&s[i+2],"%lf%c",&sum[j],&pre);
                for(k=0;k<3;k++){
                    if(pre==pref[k]){
                        sum[j]*=rate[k];
                    }
                }
            }
        }
        for(i=0;i<3;i++){
            if(sum[i]==0)
                flag=i;
        }
        //注意关系式之间的转换
        if(flag==0)
            res=sum[2]*sum[1];
        else if(flag==1)
            res=sum[0]/sum[2];
        else
            res=sum[0]/sum[1];
        printf("Problem #%d\n%c=%.2lf%c\n\n",c++,ch[flag],res,unit[flag]);

    }
    return 0;
}

//借鉴他人简短代码，巧用常量数组节省多余计算
