#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double sqrt_binary_search(double x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }

    double l, r;
    if (x > 1)
    {
        l = 1;
        r = x;
    }
    else
    {
        l = x;
        r = 1;
    }

    double precision = 1e-7;
    while (r - l > precision)
    {
        double m = l + (r - l) / 2.0;
        if (m * m == x)
        {
            return m;
        }
        else if (m * m < x)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l + (r - l) / 2.0;
}

int main()
{
    double x;
    cin >> x;
    if (x < 0)
    {
        cout << "Invalid input: x must be non-negative." << endl;
        return 1;
    }
    double result = sqrt_binary_search(x);
    cout << fixed << setprecision(7) << result << endl;
    return 0;
}
