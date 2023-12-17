#include <iostream>
using namespace std;

int makeZeroCol(int arr[4][4], int col)
{
    for (int row = 0; row < 4; row++)
    {
        arr[row][col] = 0;
    }
    return arr[4][4];
}

int makeZeroRow(int arr[4][4], int row)
{
    for (int col = 0; col < 4; col++)
    {
        arr[row][col] = 0;
    }
    return arr[4][4];
}

int main()
{

    int arr[4][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}};

    int ans[4][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {
                int row = i;
                int col = j;

                ans[4][4] = makeZeroCol(ans, col);
                ans[4][4] = makeZeroRow(ans, row);
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (ans[i][j] == 1)
                ans[i][j] = arr[i][j];
        }
    }

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << ans[row][col];
        }
        cout << "\n";
    }
}