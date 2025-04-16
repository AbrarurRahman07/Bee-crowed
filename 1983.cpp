#include <iostream>
using namespace std;
int main()
{
 int x;
 cin>>x;
 int y=x;
 int num=0;
 while(y!=0)
 {
     y/=10;
     num++;
 }
 int temp,a;
 while(num--)
 {
     a=x%10;
     x/=10;
     temp=temp*10+a;
 }

 cout<<temp<<endl;
    return 0;
}
