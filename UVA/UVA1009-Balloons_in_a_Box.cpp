#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
const double Pi=acos(-1.0);
int t;
int a,b,c,x,y,z;
struct P{
	double x,y,z,r;
}p[10],s,e;
int vis[10];
double ans;
double solve(int i){
	double t1=min(fabs(p[i].x-e.x),fabs(p[i].x-s.x));
    double t2=min(fabs(p[i].y-e.y),fabs(p[i].y-s.y));
    double t3=min(fabs(p[i].z-e.z),fabs(p[i].z-s.z));
    return min(t1,min(t2,t3));
}

double V(double r){
	return 4.0/3*r*r*r*Pi;
}

double dis(P a,P b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}

int main(){
	int kas=1;
	while(cin>>t&&t){
		cin>>s.x>>s.y>>s.z;
		cin>>e.x>>e.y>>e.z;
		double total=fabs((e.x-s.x)*(e.y-s.y)*(e.z-s.z));

		memset(p,0,sizeof(p));
		for(int i=0;i<t;i++) 
			cin>>p[i].x>>p[i].y>>p[i].z;
		for(int i=0;i<t;i++) 
			vis[i]=i;
		ans=0;
		do{
			for(int i=0;i<t;i++) p[i].r=0;
			double tmp=0;
			for(int i=0;i<t;i++){
				p[vis[i]].r=solve(vis[i]);
				for(int j=0;j<t;j++){
					if(i==j||p[vis[j]].r==0) continue;
					double t=dis(p[vis[i]],p[vis[j]])-p[vis[j]].r;
					t=max(t,0.0);
					p[vis[i]].r=min(p[vis[i]].r,t);
				}
				tmp+=V(p[vis[i]].r);
			}
			ans=max(ans,tmp);
		}while(next_permutation(vis,vis+t));


		printf("Box %d: %.0lf\n\n",kas++,fabs(total-ans));
	}
}

