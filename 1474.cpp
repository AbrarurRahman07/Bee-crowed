#include <iostream>
#include<iomanip>
using namespace std;

void display_array(int n)
{
    int array[100][100];

    for(int i=1; i<=n; i++)
    {
        int x=1;
        for(int j=1; j<=n; j++)
        {
            if(i!=j)
            {
                for(int k=i; k>=2; k--)
                {
                    array[i][x]=k;
                    x++;
                }
                for(int l=1; l<=n-i+1; l++)
                {
                    array[i][x]=l;
                    x++;
                }
                break;
            }

            else
            {
                for(int m=1; m<=n; m++)
                {
                    array[i][x]=m;
                    x++;
                }
                break;
            }

        }

    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j > 1)
                cout << " ";
            cout << setw(3) << array[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    int a;
    while(cin>>a && a!=0)
    {
        display_array(a);
    }

    return 0;
}
