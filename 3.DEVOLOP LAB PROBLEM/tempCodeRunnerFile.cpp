#include <iostream>
using namespace std;

void getMatrixElements(int A[][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> A[i][j];
        }
    }
}

void addMatrices(int A[][100], int B[][100], int C[][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }
    cout << "The sum of the matrices is:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int subMatrix(int A[][100], int B[][100], int C[][100], int x, int y)
{
     for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            C[i][j] = B[i][j]-A[i][j];
        }
        
    }
    cout << "The sub of the matrices is:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(int A[][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t, r, c;
    cout << "Enter how many matrices you want to add: ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Enter the number of rows and columns of matrix " << i << ": ";
        cin >> r >> c;
        int A[100][100], B[100][100], C[100][100];
        cout << "Enter the elements of matrix " << i << ":" << endl;
        getMatrixElements(A, r, c);

        //display matrix
        cout << "The " << i << "th matrix is:" << endl;
        displayMatrix(A, r, c);

        //ADD Matrix
        if (i == 1)
        {
            for (int k = 0; k < r; k++)
            {
                for (int l = 0; l < c; l++)
                {
                    C[k][l] = A[k][l];
                }
            }
        }
        else
        {
            addMatrices(A, C, C, r, c);
        }


        //sub matrix
         if (i == 1)
        {
            for (int p = 0; p < r; p++)
            {
                for (int q = 0; q < c; q++)
                {
                    B[p][q] = A[p][q];
                }
            }
        }
        else
        {
            subMatrix(B, A, C, r, c);
        }
    }
    return 0;
}
