#include <stdio.h>
#include "simpio"
int main()
{
  printf("please input two number\n");
  int n1,n2,total;
  n1 = GetInteger();
  n2 = GetInteger();
  total = n1 + n2;
  printf("the total is %d",total);
  
  return 0;
}
