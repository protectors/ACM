//UVA694
#include <iostream>
using namespace std;

int main()
{
    long a,L,c=0,k=0,A;    //long居然ac，int却WA。。题目要求大于int的整形范围但是又要能被32机存储，因此需要long 或long long
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
