#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int x = 1;

    if(arr[0]>arr[1])
    {
        for (int i=0; i<n-2; i++)
        {
            if(arr[i]>arr[i+1] && arr[i+1]<arr[i + 2])
            {
                i++;
                continue;
            }
            else
            {
                x=0;
                break;
            }
        }
    }
    else
    {
        for (int i=0; i<n-2; i++)
        {
            if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2])
            {
                i++;
                continue;
            }
            else
            {
                x=0;
                break;
            }
        }
    }

    cout <<x<< endl;
    return 0;
}
