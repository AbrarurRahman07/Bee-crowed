#include <iostream>
#include<cmath>
using namespace std;
///8  10  20    20
///1  10 100    3
///10 3  100    5
///0

int size_of_land(int a,int b,int c)
{
   int result;
   int area=a*b;
   double d=(area*100)/c;
   result=(int)d;
   return sqrt(result);
}
int main()
{
    int x,y,z;
    while(cin>>x && x!=0)
    {
     cin>>y>>z;
     cout<<size_of_land(x,y,z)<<endl;
    }
    return 0;
}
