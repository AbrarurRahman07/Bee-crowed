#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << setw(3) << (1 + abs(i - j));
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

