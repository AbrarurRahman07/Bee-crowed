#include <iostream>
using namespace std;

int decimal_value(string blink)
{
    int value = 0;
    if (blink[0] == '*')
        value += 4;
    if (blink[1] == '*')
        value += 2;
    if (blink[2] == '*')
        value += 1;
    return value;
}

int main()
{
    string s;
    int sum =0,loop_count = 0;

    while (loop_count < 3)
    {
        getline(cin, s);

        if (s == "caw caw")
        {
            cout << sum << endl;
            sum = 0;
            loop_count++;
        }
        else
        {
            sum +=decimal_value(s);
        }
    }

    return 0;
}

