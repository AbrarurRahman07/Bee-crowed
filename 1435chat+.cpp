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
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == n-1)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    int min_distance = m;
                    int top_distance = i;

                    int m = i

                    int left_distance = j;
                    if(j < m)
                        m = j;

                    int bottom_distance = n - 1 - i;
                    if(n-1-i < m)
                        m = n-1-i;

                    int right_distance = n - 1 - j;
                    if(n-1-j < m)
                        m = n-1-j;

                    arr[i][j] = m + 1;
                }
            }
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
