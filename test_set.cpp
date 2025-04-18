#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    multiset<int> s;
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
        total += x;
    }

    int sum = 0, count = 0;
    for(auto z: s)
      cout<<z;

    for(auto it = s.rbegin(); it != s.rend(); ++it)
    {
        sum += *it;
        count++;
        if(sum > total - sum)
            break;
    }

    cout << count << endl;
    return 0;
}
