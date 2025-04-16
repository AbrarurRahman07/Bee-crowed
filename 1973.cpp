#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int *sheep = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> sheep[i];
    }

    bool *attacked = new bool[N]();
    int currentIndex = 0;
    int starsAttacked = 0;

    while (currentIndex >= 0 && currentIndex < N)
    {
        if (sheep[currentIndex] == 0)
        {
            break;
        }

        attacked[currentIndex] = true;
        sheep[currentIndex]--;

        if (sheep[currentIndex] % 2 == 0)
        {
            currentIndex++;
        }
        else
        {
            currentIndex--;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (attacked[i])
        {
            starsAttacked++;
        }
    }

    int totalSheep = 0;
    for (int i = 0; i < N; i++)
    {
        totalSheep += sheep[i];
    }
    cout << starsAttacked << " " << totalSheep << endl;



    return 0;
}
