//UVA694
#include <iostream>
using namespace std;

int main()
{
    long a,L,c=0,k=0,A;    //long��Ȼac��intȴWA������ĿҪ�����int�����η�Χ������Ҫ�ܱ�32���洢�������Ҫlong ��long long
    while(cin>>a>>L)
    {
        A=a;
        c=1;
        if(a==-1&&L==-1)
            break;
        while(a>1)
        {
            if(a%2==1)
                a=a*3+1;
            else
                a=a/2;
            if(a>L)
                break;
            c++;
        }
        cout<<"Case "<<++k<<": A = "<<A<<", limit = "
            <<L<<", number of terms = "<<c<<endl;
    }
    return 0;
}
