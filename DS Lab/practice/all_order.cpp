#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int val;
        node *right;
        node *left;

    //constructor
        node(int val)
        {
            this->val=val;
            this->right=NULL;
            this->left=NULL;
        }
};

void preorder(node *root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
//cout<<endl;

void postorder(node *root)
{
     //base case
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";      
}
//cout<<endl;
void inorder(node *root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}


void levelorder(node *root)
{
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        //jabotiyo ja kaj ache
        cout<<f->val<<" ";

        //children gulo ke rakaha
        if(f->left)   q.push(f->left);
        if(f->right)  q.push(f->right);
    }
}

int main()
{
    node *root=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *d=new node(50);
    node *e=new node(60);
    node *f=new node(70);
    node *g=new node(80);
    node *h=new node(90);
    node *i=new node(100);

    //connection
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;

    //call
    cout<<endl<<"preorder: "<<endl;
    preorder(root);
    cout<<endl<<endl;

    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl<<endl;

    cout<<"inorder:"<<endl;
    inorder(root);
    cout<<endl<<endl;

    cout<<"levelorder:"<<endl;
    levelorder(root);
    cout<<endl<<endl;
    
    return 0;
}