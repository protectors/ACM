#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
double fun(int i)
{
    if(i==0)
        return 1;
    else
        return fun(i-1)*i;
}
int main()
{
    int i;
    double s=0;
    printf("n e\n- -----------\n");
    for(i=0;i<=9;i++)
    {
        s+=1.0/fun(i);
        if(i<3)
            cout<<i<<" "<<s<<endl;
        else
            cout<<i<<" "<<fixed<<setprecision(9)<<s<<endl;
    }
    return 0;

}
//考虑到小数点后9位，最后无奈使用cout
