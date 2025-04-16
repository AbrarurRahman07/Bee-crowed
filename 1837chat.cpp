#include <iostream>
#include <cmath>
using namespace std;

void euclidean_division(int a, int b, int &q, int &r)///  a=7, b=-3
{
    if (b == 0)
    {
        throw invalid_argument("The divisor b cannot be zero.");
    }
    q = a / b;///-2
    r = a % b;///1

    // Adjust quotient and remainder for the Euclidean Division Theorem
    if (r < 0)
    {
        r += abs(b);///1+3=4
        q -= (b > 0) ? 1 : -1; ///-2+1=-1
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

