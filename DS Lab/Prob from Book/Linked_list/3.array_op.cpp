/*
impliment here:
    1.Traversing
    2.sorting
    3.searching
    4.insertion
    5.delation
    6.marging
Do it for an array.Here use cpp
*/
#include <bits/stdc++.h>
using namespace std;

// prototype
void traverse_element(int a[], int n);
void sort_array(int a[], int n);
void search_element(int a[], int n, int v);
void insert_element(int a[], int n, int pos, int val);
void delete_element_by_position(int a[], int &n, int pos);
void merge_array(int a1[], int n, int a2[], int m);
void input_array(int array2[], int n);

// main function
int main()
{
    cout << "Take input an Array" << endl;
    cout << "Array size: ";
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th element: ";
        cin >> array[i];
    }
    while (true)
    {
        cout << "1. Traverse the Array:" << endl;
        cout << "2. Sort the Array:" << endl;
        cout << "3. Search an element:" << endl;
        cout << "4. Insert an element:" << endl;
        cout << "5. Delete an element:" << endl;
        cout << "6. Marge Two Array:" << endl;
        cout << "0. Exit:" << endl;
        char op;
        cout << "Enter option: ";
        cin >> op;

        if (op == '1')
        {
            cout << "Traverse: ";
            traverse_element(array, n);
        }

        if (op == '2')
            sort_array(array, n);

        if (op == '3')
        {
            int val;
            cout << "Enter the value: ";
            cin >> val;
            search_element(array, n, val);
        }

        if (op == '4')
        {
            int pos;
            int val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            insert_element(array, n, pos, val);
        }

        if (op == '5')
        {
            int pos;
            cout << "Enter element position for Delete:";
            cin >> pos;
            delete_element_by_position(array, n, pos);
        }

        if (op == '6')
        {
            cout << "Input an array for merge" << endl;
            int m;
            cout << "Enter array size: ";
            cin >> m;
            int array2[m];
            input_array(array2, m);
            merge_array(array, n, array2, m);
        }

        if (op == '0')
        {
            cout << "Terminate the program" << endl;
            return 0;
        }
    }

    return 0;
}

// traverse the array
void traverse_element(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;
}

// Sort the array
void sort_array(int a[], int n)
{
    sort(a, a + n);
    cout << "After sort: ";
    traverse_element(a, n);
}

// search element an array
void search_element(int a[], int n, int v)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == v)
        {
            cout << "available the element at " << i << "th index" << endl
                 << endl;
            flag = true;
            return;
        }
    }
    if (!flag)
        cout << "The element is not exist here" << endl
             << endl;
}

// insert element an array
void insert_element(int a[], int n, int pos, int val)
{
    if (pos < 0 || pos > n)
    {
        cout << "Invalid position!" << endl
             << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];

    // Insert the new element at the specified position
    a[pos] = val;

    // Update the size of the array
    n++;

    cout << "After insert: ";
    traverse_element(a, n);
}

// delete element from array
void delete_element_by_position(int a[], int &n, int pos)
{
    if (pos < 0 || pos >= n)
    {
        cout << "Invalid position!" << endl
             << endl;
        return;
    }

    // Shift elements to the left to overwrite the element at the specified position
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    // Decrease the size of the array
    n--;

    cout << "Element at position " << pos << " deleted successfully." << endl;
    cout << "After delete: ";
    traverse_element(a, n);
}

// merge two array
void merge_array(int a1[], int n, int a2[], int m)
{
    int size = m + n;
    int a3[size];
    // Print elements of first array
    cout << "Merged Array: ";
    for (int i = 0; i < n; i++)
    {
        a3[i] = a1[i];
    }

    // Print elements of second array
    int k = 0;
    for (int j = n; j < size; j++)
    {
        a3[j] = a2[k];
        k++;
    }
    traverse_element(a3, size);
}

// take input an array
void input_array(int array2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th element: ";
        cin >> array2[i];
    }
}