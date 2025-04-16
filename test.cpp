#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);      // উপহার দেওয়া তথ্য (1-based indexing)
    vector<int> res(n + 1);    // উপহার পাওয়ার তথ্য (উল্টো)

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        res[p[i]] = i;         // p[i] নম্বর বন্ধু উপহার পেয়েছে i থেকে
    }

    for (int i = 1; i <= n; ++i) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

