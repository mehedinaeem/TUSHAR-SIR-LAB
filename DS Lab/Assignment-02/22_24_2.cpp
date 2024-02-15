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

// prototype
void traverse_element(Node *head);
void sort_link_list(Node *head);
void search_element(Node *head, char val);
void insert_element(Node *&head, int pos, char val);
void delete_element(Node *&head, char val);
void merge_link_list(Node *head1, Node *head2);
int size_of_link_list(Node *head);
Node *link_list2();

// main function
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

    while (true)
    {
        cout << "1. Traverse the Linked List:" << endl;
        cout << "2. Sort the Linked List:" << endl;
        cout << "3. Search an element:" << endl;
        cout << "4. Insert an element:" << endl;
        cout << "5. Delete an element:" << endl;
        cout << "6. Marge Two Linked List:" << endl;
        cout << "0. Exit:" << endl;
        char op;
        cout << "Enter option: ";

        cin >> op;
        cout << endl;

        if (op == '1')
        {
            cout << "Traverse: ";
            traverse_element(head);
        }

        if (op == '2')
        {
            cout << "After sort: ";
            sort_link_list(head);
        }

        if (op == '3')
        {
            char v;
            cout << "Enter the value: ";
            cin >> v;
            search_element(head, v);
        }

        if (op == '4')
        {
            int pos;
            char val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            insert_element(head, pos, val);
        }

        if (op == '5')
        {
            char val;
            cout << "Enter value for Delete:";
            cin >> val;
            delete_element(head, val);
        }

        if (op == '6')
        {
            Node *head2 = link_list2();
            merge_link_list(head, head2);
        }

        if (op == '0')
        {
            cout << "Terminate the program" << endl;
            return 0;
        }
    }

    return 0;
}

// traverse the linked list
void traverse_element(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

// sort the link list
void sort_link_list(Node *head)
{
    Node *tmp = head;
    bool swapped = true; 

    //(corner case) If list is empty or has only one node, it's already sorted
    if (head == NULL || head->next == NULL)
        return;

    while (swapped == true)
    {
        swapped = false;
        tmp = head;

        while (tmp->next != NULL)
        {
            if (tmp->val > tmp->next->val)
            {
                swap(tmp->val, tmp->next->val);
                swapped = true;
            }
            tmp = tmp->next;
        }
    }

    // traverse after sort by traverse function
    traverse_element(head);
}

// insert at any position
void insert_element(Node *&head, int pos, char val)
{
    // corner case impliment
    // when position greater size
    int ll_size = size_of_link_list(head);
    if (pos < 0 || pos > ll_size)
    {
        cout << "Out of bound.Its not possible to inser.Plz provide valid position." << endl
             << endl;
        return;
    }

    // when wanna add head or 0 indxed
    if (pos == 0)
    {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        cout << "After insert element in head: ";
        traverse_element(head);
        return;
    }

    // main method for insert
    Node *newnode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;

    cout << "After insert element: ";
    traverse_element(head);
}

// search any element
void search_element(Node *head, char val)
{
    Node *tmp = head;
    bool flag = false;
    while (tmp->next != NULL)
    {
        if (tmp->val == val)
        {
            cout << "Find that element" << endl;
            cout << "The Address of the element: " << tmp << endl
                 << endl;
            flag = true;
            break;
        }
        tmp = tmp->next;
    }
    if (!flag)
        cout << "Not avaiable that element" << endl
             << endl;
}

void delete_element(Node *&head, char val)
{
    // corner case
    if (head == NULL)
    {
        cout << "No elements available" << endl;
        return;
    }

    // Delete head if it matches the value
    if (head->val == val)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        cout << "After deleting element from head: ";
        traverse_element(head);
        return;
    }

    // Delete from any position without head
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            Node *deletenode = tmp->next;
            tmp->next = tmp->next->next;
            delete deletenode;
            cout << "After deleting element: ";
            traverse_element(head);
            return;
        }
        tmp = tmp->next;
    }

    // If the element is not found
    cout << "The element is not available" << endl
         << endl;
}

void merge_link_list(Node *head1, Node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        cout << "No element for merge" << endl;
        return;
    }

    Node *tmp = head1;
    // Traverse to the end of the first linked list
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    // At this point, tmp points to the last node of the first linked list
    // Make the last node of the first list point to the head of the second list
    tmp->next = head2;

    cout << "Lists merged successfully." << endl;

    // Print the merged list
    cout << "Merged list: ";
    traverse_element(head1);
    cout << endl
         << endl;
}

// find size
int size_of_link_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

// create another ll
Node *link_list2()
{

    Node *head = new Node('1');
    Node *a = new Node('2');
    Node *b = new Node('3');
    Node *c = new Node('4');
    Node *d = new Node('5');

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    return head;
}
