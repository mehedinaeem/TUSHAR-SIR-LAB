#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int data;
       node *left;
       node *right;

    //constructor
      node(int val)
      {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
      }
};

node* input_tree()
{
    cout<<"Enter root: ";
    int val;
    cin>>val;
    node *root;
    if(val==-1)  root=NULL;
    else  root=new node(val);

    queue<node*>q;
    if(root)//root null na hole
        q.push(root);

    while(!q.empty())
    {
        //1.line theke ber kora
        node *p=q.front();
        cout<<"front= "<<p->data<<endl;
        q.pop();

        //2.jabatiya kaj
        int l,r;
        cout<<"Enter left: ";
        cin>>l;
        cout<<"Enter right: ";
        cin>>r;
        node *myleft;
        node *myright;

        if(l==-1)   myleft=NULL;
        else        myleft=new node(l);
    
        if(r==-1)   myright=NULL;
        else        myright=new node(r);

        p->left=myleft;
        p->right=myright;

        //children gulo ke push kora
        if(p->left)//p left null na hole
           q.push(p->left);

        if(p->right)
           q.push(p->right);
    
    }
    return root;
}

void level_order(node *root)
{
    if(root==NULL)
    {
        cout<<"No Tree";
        return;
    }
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        //all work
        cout<<f->data<<" ";

        //child push
        if(f->left)  q.push(f->left);
        if(f->right)  q.push(f->right);
    }
}

void pre_order(node *root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(node *root)
{
    if(root==NULL)
    {
        return;
    }

    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

void in_order(node *root)
{
    if(root==NULL)  return;

    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}




int main()
{

    node *root;
    root=input_tree();
    cout<<endl<<"Levelorder: ";
    level_order(root);
    cout<<endl<<"Preorder: ";
    pre_order(root);
    cout<<endl<<"In orde: ";
    in_order(root);
    cout<<endl<<"post order: ";
    post_order(root);
    cout<<endl;
    return 0;
}