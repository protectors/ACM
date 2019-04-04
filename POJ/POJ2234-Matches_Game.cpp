#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int a=0,b;
        for(int i=0;i<n;i++){
            cin>>b;
            a^=b;
        }
        printf("%s\n",a?"Yes":"No");
    }
    return 0;
}
