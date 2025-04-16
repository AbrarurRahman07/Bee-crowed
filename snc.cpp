
#include <iostream>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        if(n == 0)
            return 0;

        int arr[n][n];
        int layers = (n + 1) / 2; // Determine the number of layers

        for(int layer = 0; layer < layers; layer++)
        {
            int value = layer + 1; // Each layer has the same value

            // Fill top row of the current layer
            for(int i = layer; i < n - layer; i++)
                arr[layer][i] = value;

            // Fill right column of the current layer
            for(int i = layer; i < n - layer; i++)
                arr[i][n - layer - 1] = value;

            // Fill bottom row of the current layer
            for(int i = layer; i < n - layer; i++)
                arr[n - layer - 1][i] = value;

            // Fill left column of the current layer
            for(int i = layer; i < n - layer; i++)
                arr[i][layer] = value;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] < 10)
                    cout << "  " << arr[i][j];
                else if(arr[i][j] < 100)
                    cout << " " << arr[i][j];
                else
                    cout << arr[i][j];

                if(j < n-1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
/*              int top_distance = i;
                int left_distance = j;
                int bottom_distance = n - 1 - i;
                int right_distance = n - 1 - j;
