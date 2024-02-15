/*
impliment here:
    1.Traversing
    2.sorting
    3.searching
    4.insertion
    5.delation
    6.marging
using linked list.Here impliment it using by cpp.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char val;
    Node *next;

    Node(char val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node('N');
    Node *a = new Node('O');
    Node *b = new Node(' ');
    Node *c = new Node('E');
    Node *d = new Node('X');
    Node *e = new Node('I');
    Node *f = new Node('T');
    // Node *g = new Node('');

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }
    cout<<endl;

    return 0;
}