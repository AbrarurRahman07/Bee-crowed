#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> myvector;
    int i;

    // set some content in the vector:
    while(cin>>i)
    {
      myvector.push_back(i);
    }
    cout<<endl;

    cout << "size: " << myvector.size() << "\n";
    cout << "capacity: " << myvector.capacity() << "\n";
    cout << "max_size: " << myvector.max_size() << "\n";
    return 0;
}
