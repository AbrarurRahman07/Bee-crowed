#include<stdio.h>
int main()
{
  int var;
  var = 500;
  int *ptr;
  ptr=&var;
  int **pptr;
  pptr=ptr;

  printf("%d \n",var);
  printf("%d \n",*ptr);
  printf("%d \n",*pptr);
}
