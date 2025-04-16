#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,a=0,d=0;
  cin>>n;
  while(n--)
  {
    char c;
    cin>>c;
    if(c=='A')
      a++;
    else if(c=='D')
      d++;
  }
  string s= (a>d) && (a!=d) ? "Anton" : (d>a)&& (d!=a) ? "Danik" : "Friendship" ;
  cout<<s<<endl;
}
