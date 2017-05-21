#include <cstdio>
#include <cmath>
using namespace std;
#define eps 1e-4
#define Pi  acos(-1)

double gcd(double x,double y){
    return fabs(y)<1e-4?x:gcd(y,fmod(x,y));
}

double f(double ax,double ay,double bx,double by){
    return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}
int main(){
    double x[3],y[3];
    for(int i=0;i<3;i++) scanf("%lf%lf",&x[i],&y[i]);
    double a=f(x[0],y[0],x[1],y[1]);
    double b=f(x[1],y[1],x[2],y[2]);
    double c=f(x[0],y[0],x[2],y[2]);
    double p=(a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    double r=a*b*c/(s*4);
    double A=acos((b*b+c*c-a*a)/(2.0*b*c));
    double B=acos((c*c+a*a-b*b)/(2.0*a*c));
    double C=acos((a*a+b*b-c*c)/(2.0*a*b));
    double o=gcd(gcd(A,B),C);
    double n=Pi/o;
    printf("%.8lf\n",n/2.0*r*r*sin(2*Pi/n));
    return 0;
}

