#include <iostream>

using namespace std;

const int MAX=100010;
const int NIL=-1;
struct Node{ int p, l, r; };
struct Node T[MAX];
int n;

// 先序遍历
void preParse(int u){
    if(u==NIL) return;
    cout<<" "<<u;
    preParse(T[u].l);
    preParse(T[u].r);
}

// 中序遍历
void inParse(int u){
    if(u==NIL) return;
    inParse(T[u].l);
    cout<<" "<<u;
    inParse(T[u].r);
}

// 后续遍历
void postParse(int u){
    if(u==NIL) return;

    postParse(T[u].l);
    postParse(T[u].r);
    cout<<" "<<u;
}

int main(){
    int v,l,r,root;
    cin>>n;
    for(int i=0;i<n;i++) T[i].p=NIL;

    for(int i=0;i<n;i++){
        cin>>v>>l>>r;
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL) T[l].p=v;
        if(r!=NIL) T[r].p=v;
    }

    for(int i=0;i<n;i++) if(T[i].p==NIL) root=i;

    cout<<"Preorder\n";
    preParse(root);
    cout<<endl;

    cout<<"Inorder\n";
    inParse(root);
    cout<<endl;

    cout<<"Postorder\n";
    postParse(root);
    cout<<endl;

    return 0;
}