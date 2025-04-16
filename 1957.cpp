#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string decimalToHexadecimal(int num)
{
    if (num == 0) return "0";

    string hex;
    while (num > 0)
    {
        int remainder = num % 16;
        if (remainder < 10)
        {
            hex += (remainder + '0');
        }
        else
        {
            hex += (remainder - 10 + 'A');
        }
        num /= 16;
    }

    reverse(hex.begin(), hex.end());
    return hex;
}

int main()
{
    int decimalNumber;

    while(1)
    {
        cout << "Enter a natural number: ";
        cin >> decimalNumber;

        if (decimalNumber < 0)
        {
            cerr << "Please enter a non-negative integer." << endl;
            break;
        }

        string hexNumber = decimalToHexadecimal(decimalNumber);
        cout << "The hexadecimal representation is: " << hexNumber <<endl;

    }
    return 0;
}
