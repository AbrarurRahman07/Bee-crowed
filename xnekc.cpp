#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n;
    cin >> n;

    int amount = round(n * 100);

    int countN[6];
    int note[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        countN[i] = amount / note[i];
        amount -= countN[i] * note[i];
        cout << countN[i] << " nota(s) de R$ " << showpoint << fixed << setprecision(2) << note[i] / 100.0 << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        countN[i] = amount / coins[i];
        amount -= countN[i] * coins[i];
        cout << countN[i] << " moeda(s) de R$ " << showpoint << fixed << setprecision(2) << coins[i] / 100.0 << endl;
    }

    return 0;
}
