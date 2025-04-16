#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ///malloc,calloc,free,realloc
  int *ptr;
  ptr=(int*)malloc(5*sizeof(int));
  free(ptr);
  cout<<sizeof(ptr);
}
