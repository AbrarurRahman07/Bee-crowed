#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // The segment on day m should have length m+1
        int length = m + 1;
        // The possible segments are [l, l + m] or [r - m, r]
        // We need to ensure these segments are within [l, r]
        int l1 = l;
        int r1 = l + m;
        if (r1 > r)
        {
            r1 = r;
            l1 = r - m;
        }
        cout << l1 << " " << r1 << endl;
    }
    return 0;
}
