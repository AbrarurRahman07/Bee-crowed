#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str ("This is an example sentence.");
    cout << str << '\n';

    str.erase (10,8);
    cout << str << '\n';
    // "This is an sentence."
    str.erase (str.begin()+9);
    cout << str << '\n';
    // "This is a sentence."
    str.erase (str.begin()+5, str.end()-9);
    cout << str << '\n';
    // "This sentence."
    return 0;
}
