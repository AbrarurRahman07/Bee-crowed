#include <iostream>

using namespace std;

int main()
{
    long long int n, total = 0;
    cin >> n;

    long long int a[n];
    long long int *arr=a;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        total++;.
        if(arr[i]%2==0)
            break;
    }

    int i = 0;
    while (i >= 0 && i < n)
    {
        if (arr[i] == 0)
        {
            i--;
            continue;
        }

        arr[i]--;


        if (arr[i] % 2 == 0)
        {
            i++;
        }
        else
        {
            i--;
        }

    }

    long long int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }

    cout << total << " " << sum << endl;

    return 0;
}
