#include <iostream>
#include <iomanip>
using namespace std;
///  1   2   3   4   5
///  2   1   2   3   4
///  3   2   1   2   3
///  4   3   2   1   2
///  5   4   3   2   1

void printMatrix(int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int value;
            if (i > j)
            {
                value = i - j + 1;
            }
            else
            {
                value = j - i + 1;
            }
            cout << setw(3) << value;
            if (j < N - 1) cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    while (true)
    {
        cin >> N;
        if (N == 0) break;
        printMatrix(N);
        cout << endl;
    }
    return 0;
}

