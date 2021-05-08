#include <iostream>
#include <cstdlib>
using namespace std;
//const int NIL=-1;

struct Node{
    int val;
    Node *p, *l,*r;
};

Node *root, *NIL;

Node *treeMinimum(Node *x){
    while(x->l!=NIL) x=x->l;
    return x;
}

Node *treeSuccessor(Node *x){
    if(x->r!=NIL) return treeMinimum(x->r);
    Node *y=x->p;
    while(y!=NIL && x==y->r){
        x=y;
        y=y->p;
    }
    return y;
}

void treeDelete(Node *z){
    Node *x, *y;
    if(z->l==NIL|| z->r==NIL) y=z;
    else y=treeSuccessor(z);

    // 确定y的子节点x
    if(y->l!=NIL) x=y->l;
    else x=y->r;

    if(x!=NIL) x->p=y->p;

    // 修改父结点的连接
    if(y->p==NIL) root=x;
    else{
        if(y==y->p->l) y->p->l=x;
        else y->p->r=x;
    }

    if(y!=z){ z->val=y->val; }
    free(y);
}

Node *find(Node *u, int val){
    while(u!=NIL && val!=u->val){
        if(val<u->val) u=u->l;
        else u=u->r;
    }
    return u;
}

void insert(int val){
    Node *y=NIL;
    Node *x=root;
    Node *z;

    // 创建结点
    z=(Node *)malloc(sizeof(Node));
    z->val=val;
    z->l=NIL;
    z->r=NIL;

    //寻找到要插入的位置
    while(x!=NIL){
        y=x;
        if(z->val < x->val) x=x->l;
        else x=x->r;
    }

    // 插入结点
    z->p=y;
    if(y==NIL) root=z;
    else{
        if(z->val<y->val) y->l=z;
        else y->r=z;
    }

}

void inorder(Node *u){
    if(u==NIL) return;
    inorder(u->l);
    cout<<" "<<u->val;
    inorder(u->r);
}

void preorder(Node *u){
    if(u==NIL) return;
    cout<<" "<<u->val;
    preorder(u->l);
    preorder(u->r);
}

int main(){
    int n,x;
    string com;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>com;
        if(com[0]=='f'){
            cin>>x;
            Node *t=find(root,x);
            if(t!=NIL) cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(com=="insert"){
            cin>>x;
            insert(x);
        }else if(com=="print"){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }else if(com=="delete"){
            cin>>x;
            treeDelete(find(root, x));
        }
    }
    return 0;
}