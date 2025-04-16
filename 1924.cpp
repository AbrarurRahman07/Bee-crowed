#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n<1 && n>2000)
    {
        cin>>n;
    }
    for(int i=0;i<n;i++)
    {
      getline(cin,s);
      getchar();
    }
    cout<<"Ciencia da Computacao"<<endl;
    return 0;
}
