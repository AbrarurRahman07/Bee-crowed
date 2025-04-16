#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i=0; i<N; ++i)
    {
        cin>>heights[i];
    }

    bool pattern=true;

    for (int i=1; i<N; ++i)
    {
        if ((heights[i]>heights[i-1] && (i==N-1 || heights[i]>heights[i+1])) ||
                (heights[i] < heights[i-1] && (i==N-1 || heights[i]<heights[i+1])))
        {
            continue;
        }
        else
        {
            pattern=false;
            break;
        }
    }

    if (pattern)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}

