#include <iostream>

using namespace std;

int main()
{

    int rows, i, j, columns, size = 0;
    cout << "Enter the size of matrix" << endl;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    cout << "Enter the number of columns :" << endl;
    cin >> columns;
    int A[rows][columns];
    cout << "Enter the array";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> A[i][j];
            if (A[i][j] != 0)
            {
                size += 1;
            }
        }
    }

    int k = 0, compactMatrix[3][size];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (A[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = A[i][j];
                k += 1;
            }
        }
    }

    cout << "Sparse Matrix : " << endl;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {

            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Compact Matrix :" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < size; j++)
        {

            cout << compactMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}