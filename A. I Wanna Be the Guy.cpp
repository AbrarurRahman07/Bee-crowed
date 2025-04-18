#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, p, q, num;
    set<int> levels,total;

    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> num;
        levels.insert(num);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        levels.insert(num);
    }
    for(int i=1;i<=n;i++)
    {
      total.insert(i);
    }
    cout << ((levels==total) ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
