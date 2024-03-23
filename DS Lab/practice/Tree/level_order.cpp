#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;

    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void pre_order(node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(node *root)
{
    if (root == NULL)
        return;

    pre_order(root->left);
    cout << root->val << " ";
    pre_order(root->right);
}

void post_order(node *root)
{
    if (root == NULL)
        return;

    pre_order(root->left);
    pre_order(root->right);
    cout << root->val << " ";
}

void level_order(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    // assign node
    node *root = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *e = new node(60);

    // link
    root->left = e;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = a;

    pre_order(root);
    cout<<endl;
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;
    level_order(root);
    cout<<endl;

    return 0;
}