#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long double x;
    int n = 0;
    cin >> x;

    if (abs(x) < 1)
    {
        while (abs(x) < 1)
        {
            x *= 10;
            n++;
        }
        if (x > 0)
            cout << "+";
        cout << showpoint << fixed << setprecision(4) << x << "E-";
        if (n < 10)
            cout << '0';
        cout << n << endl;
    }
    else if (abs(x) >= 10)
    {
        while (abs(x) >= 10)
        {
            x /= 10;
            n++;
        }
        if (x > 0)
            cout << "+";
        cout << showpoint << fixed << setprecision(4) << x << "E+";
        if (n < 10)
            cout << '0';
        cout << n << endl;
    }
    else
    {
        if (x > 0)
            cout << "+";
        cout << showpoint << fixed << setprecision(4) << x << "E+00" << endl;
    }

    return 0;
}
