#include<iostream>
using namespace std;
int main()
{
    int x,y,s;
    while(cin>>x)
    {
      getchar();
      cin>>y;
      s=(x*60+y+60)-8*60;
      if(s>=0)
        cout<<"Atraso maximo: "<<s<<endl;
      else
        cout<<"Atraso maximo: "<<0<<endl;
    }
    return 0;
}

