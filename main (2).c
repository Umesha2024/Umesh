#include<stdio.h>
int test()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  if(n%2==0)
    printf("the given number is even ");
  else
    printf("the given number is odd");
    
}

int main()
{
  test();
}