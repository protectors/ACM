#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int min(int x,int y){
    return x<y?x:y;
}
int a[1000000];
int main(){
    int i,t,len,n,mint,maxt;
    scanf("%d",&t);
    while(t--){
        mint=maxt=0;
        scanf("%d%d",&len,&n);
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            mint=max(mint,min(a[i],len-a[i]));
        for(i=1;i<=n;i++)
            maxt=max(maxt,max(a[i],len-a[i]));
        printf("%d %d\n",mint,maxt);
    }
    return 0;
}
