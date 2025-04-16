#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>a)
{
    //technic 1 to print a vertor oe array
    for(auto v : a)
    {
        cout<<v<<" ";
    }
    cout<<endl;

    /*//technic 2 to print a vertor oe array
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
}
int main()
{
    int x;
    vector<int>arr;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    arr.pop_back();
    arr.pop_back();

    display(arr);

    return 0;
}

