/*#include<iostream>
using namespace std;
int main()
{
    int y,a,b,c,d;
    cin>>y;
    while(1)
    {
        y++;
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    cout<<y<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;

bool take_year(int year)///1987
{
    int digits[10] = {0};

    while (year > 0)
    {
        int digit = year % 10;
        if (digits[digit] > 0)
        {
            return false;
        }
        digits[digit]++;
        year /= 10;
    }

    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        if (take_year(y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
