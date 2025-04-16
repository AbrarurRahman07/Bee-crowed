#include<bits.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
   int n;
   vector<int>arr;
   while(scanf("%d",&n)==1)
   {
     arr.push_back(n);
   }
    for(auto value : arr)
    {
      cout<<value;
    }

   return 0;
}
