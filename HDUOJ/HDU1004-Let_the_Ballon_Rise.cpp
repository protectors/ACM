#include<iostream>
#include<map>
using namespace std;
int main()
{

   int n,i;
   string s;
   while(cin>>n&&n)
   {
       map<string,int> b;
       map<string,int>::iterator it,p;
       for(i=0;i<n;i++)
       {
           cin>>s;
           b[s]++;
       }
       for(it=p=b.begin();it!=b.end();it++)
       {
           if(p->second<it->second)
            p=it;
       }
       cout<<p->first<<endl;
   }
    return 0;

}
