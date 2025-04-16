#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void printMatrix(int n)
{
    int matrix[100][100];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[i][j] = min(min(i + 1, j + 1), min(n - i, n - j));
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j > 0)
            {
                cout << " ";
            }
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        printMatrix(n);
    }
    return 0;
}
