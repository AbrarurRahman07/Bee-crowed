#include <iostream>
#include <cmath>
using namespace std;

void euclidean_division(int a, int b, int &q, int &r)
{
    if (b == 0)
    {
        throw invalid_argument("The divisor b cannot be zero.");
    }
    q = a / b;
    r = a % b;

    // Adjust quotient and remainder for the Euclidean Division Theorem
    if (r < 0)
    {
        r += abs(b);
        q -= (b > 0) ? 1 : -1;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    int q, r;
    try
    {
        euclidean_division(a, b, q, r);
        cout << q << " " << r << endl;
    }
    catch (const invalid_argument &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
