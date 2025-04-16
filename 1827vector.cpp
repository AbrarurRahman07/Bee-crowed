#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printSquareArray(int N) {
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    int innerStart = N / 3;
    int innerEnd = N - innerStart;

    // Fill the main diagonal with 2 and the secondary diagonal with 3
    for (int i = 0; i < N; ++i) {
        matrix[i][i] = 2;
        matrix[i][N - i - 1] = 3;
    }

    // Fill the inner part with 1
    for (int i = innerStart; i < innerEnd; ++i) {
        for (int j = innerStart; j < innerEnd; ++j) {
            matrix[i][j] = 1;
        }
    }

    // Fill the central element with 4
    matrix[N / 2][N / 2] = 4;

    // Print the matrix
    for (const auto& row : matrix) {
        for (int j = 0; j < N; ++j) {
            cout << row[j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int N;
    while (cin >> N) {
        printSquareArray(N);
    }
    return 0;
}

