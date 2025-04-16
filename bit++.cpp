#include<iostream>
using namespace std;
int main()
{
  int x=0,y;
  cin>>y;
  while(y--)
  {
    string s;
    cin>>s;
    if(s[0]&&s[1]=='+' || s[1]&& s[2]=='+')
    {
      x++;
    }
    else if(s[0]&&s[1]=='-' || s[1]&& s[2]=='-')
    {
      x--;
    }
  }
  cout<<x<<endl;
}
