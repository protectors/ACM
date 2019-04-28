#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn=10005;
struct Point{
	double x,y;
}p[maxn];
int t[maxn];
int n;
double ans;
bool comx(Point a, Point b){
	return a.x<b.x;
}
bool comy(int i,int j){
	return p[i].y<p[j].y;
}

double dist(int i,int j){
	return sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
}

double solve(int l,int r){
	if(l==r) return 0xffffffff;
	if(l+1==r) return dist(l,r);
	int m=(l+r)>>1;
	double d=min(solve(l,m),solve(m+1,r));
	int c=0;
	for(int i=l;i<=r;i++){
		if(fabs(p[i].x-p[m].x)<=d) t[c++]=i;
	}
	sort(t,t+c,comy);
	for(int i=0;i<c;i++){
		for(int j=i+1;j<c&&p[t[j]].y-p[t[i]].y<d;j++){
			if(d-dist(t[i],t[j])>1e-9) d=dist(t[i],t[j]);
		}
	}
	return d;
}

int main(){
	while(scanf("%d",&n)&&n){
		for(int i=0;i<n;i++) scanf("%lf%lf",&p[i].x,&p[i].y);
		sort(p,p+n,comx);
		ans=solve(0,n-1);
		if(ans-10000>1e-9) printf("INFINITY\n");
		else printf("%.4lf\n",ans);
	}
	return 0;
}