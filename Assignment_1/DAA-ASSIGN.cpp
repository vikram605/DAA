#include <bits/stdc++.h>
using namespace std;
#define ROW 4
#define COL 4

bool search(int mat[ROW][COL], int row_start, int row_end, int column_start, int column_end, int key)
{
    if (row_start > row_end || column_start > column_end)
        return false;
    if (row_end == row_start && column_end == column_start)
    {
        if (mat[row_end][column_end] == key)
        {
            cout << "Element found at index {" << row_end << "," << column_end << "}";
            return true;
        }

        else
            return false;
    }

    if (mat[row_start][column_start] > key || mat[row_end][column_end] < key)
        return false;

    int mid_row = (row_end + row_start) / 2;
    int mid_column = (column_end + column_start) / 2;

    if (key == mat[mid_row][mid_column])
    {
        cout << "Element found at index {" << mid_row << "," << mid_column << "}";
        return true;
    }
    else if (key > mat[mid_row][mid_column])
    {
        return search(mat, row_start, mid_row, mid_column + 1, column_end, key) || search(mat, mid_row + 1, row_end, column_start, column_end, key);
    }
    return search(mat, row_start, mid_row - 1, mid_column, column_end, key) || search(mat, row_start, row_end, column_start, mid_column - 1, key);
}

int main()
{
    srand(time(0));
    // int mat[ROW][COL] = {{10, 20, 30, 40},
    //                      {15, 25, 35, 45},
    //                      {27, 29, 37, 48},
    //                      {32, 33, 39, 50}};
    int mat[ROW][COL];
    int x = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            x += (rand() % 10) + 1;
            mat[i][j] = x;
        }
    }
    cout << "Below is the randomly generated 4X4 matrix:-" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    int key;
    cout << "Enter the element to be found:" << endl;
    cin >> key;

    if (search(mat, 0, ROW - 1, 0, COL - 1, key) == 0)
        cout << "Not found";
}