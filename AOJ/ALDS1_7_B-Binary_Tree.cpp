#include <iostream>

using namespace std;

const int MAX=10010;
const int NIL=-1;
int n,H[MAX],D[MAX];

struct Node{
    int p,l,r;
};

Node T[MAX];

// 设置二叉树结点的深度,与有根树不同
void setDepth(int u, int d){
    if(u==NIL) return;
    D[u]=d;
    setDepth(T[u].l, d+1);
    setDepth(T[u].r, d+1);
}

// 设置二叉树结点的高
int setHeight(int u){
    int h1=0, h2=0;
    if(T[u].l!=NIL) h1=setHeight(T[u].l)+1;
    if(T[u].r!=NIL) h2=setHeight(T[u].r)+1;
    return H[u]=max(h1,h2);
}

// 返回结点u的兄弟结点
int getSibling(int u){
    if(T[u].p==NIL) return NIL;
    if(T[T[u].p].l!=u && T[T[u].p].l!=NIL) return T[T[u].p].l;
    if(T[T[u].p].r!=u && T[T[u].p].r!=NIL) return T[T[u].p].r;
    return NIL;
}

void print(int u){
    cout<<"node "<<u<<": ";
    cout<<"parent = "<<T[u].p<<", ";
    cout<<"sibling = "<<getSibling(u)<<", ";

    int deg=0;
    if(T[u].l!=NIL) deg++;
    if(T[u].r!=NIL) deg++;
    cout<<"degree = "<<deg<<", ";
    cout<<"depth = "<<D[u]<<", ";
    cout<<"height = "<<H[u]<<", ";

    if(T[u].p==NIL) cout<<"root\n";
    else if(T[u].l==NIL && T[u].r==NIL) cout<<"leaf\n";
    else cout<<"internal node\n";
}

int main(){
    int v,l,r,root=0;
    cin>>n;
    for(int i=0;i<n;i++) T[i].p=NIL;

    for(int i=0;i<n;i++){
        cin>>v>>l>>r;
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL) T[l].p=v;
        if(r!=NIL) T[r].p=v;
    }

    // 寻找root
    for(int i=0;i<n;i++) if(T[i].p==NIL) root=i;

    setDepth(root,0);
    setHeight(root);

    for(int i=0;i<n;i++) print(i);


    return 0;
}