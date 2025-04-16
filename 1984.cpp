#include <iostream>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    long long int y = x;
    long long int num = 0;
    long long int temp = 0;
    long long int a;

    while (y != 0)
    {
        y /= 10;
        num++;
    }

    while (num--)
    {
        a = x % 10;
        x /= 10;
        temp = temp * 10 + a;
    }

    cout << temp << endl;
    return 0;
}
