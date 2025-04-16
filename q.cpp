#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A > B && B <= C)
    {
        cout << ":)" << endl;
    }
    else if (A < B && B >= C)
    {
        cout << ":(" << endl;
    }
    else if (A < B && B < C && (C - B) > (B - A))
    {
        cout << ":)" << endl;
    }
    else if (A < B && B < C && (C - B) < (B - A))
    {
        cout << ":(" << endl;
    }
    else if (A > B && B > C && (B - C) < (A - B))
    {
        cout << ":)" << endl;
    }
    else if (A > B && B > C && (B - C) > (A - B))
    {
        cout << ":(" << endl;
    }
    else if (A == B && B < C)
    {
        cout << ":)" << endl;
    }
    else if (A == B && B >= C)
    {
        cout << ":(" << endl;
    }

    return 0;
}
