#include <iostream>
using namespace std;

int decimel_value(string bin)
{
  int value =0;
  if(bin[0]=='*')
    value+=4;
  if(bin[1]=='*')
    value+=2;
  if(bin[2]=='*')
    value+=1;
  return value;
}
int main()
{
    string s;
    int sum=0,loop=0;
    for(;loop<3;)
    {
      getline(cin,s);
      if(s=="caw caw")
      {
        cout<<sum<<endl;
        sum=0;
        loop++;
      }
      else
      {
        sum+=decimel_value(s);
      }
    }
    return 0;
}
