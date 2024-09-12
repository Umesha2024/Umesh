#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int prod(int a,int b);
int div(int a,int b);
int main()
{
  int num1, num2, sum, result1, result2, result3;
  printf("Enter two numbers :");
  scanf("%d %d",&num1,&num2);
  sum=add(num1,num2);
  result1=sub(num1,num2);
  result2=prod(num1,num2);
  result3=div(num1,num2);
  printf("sum = %d\n",sum);
  printf("sub = %d\n",result1);
  printf("prod = %d\n",result2);
  printf("div = %d\n",result3);
}
int add(a,b) {
  return a+b;
}
int sub(a,b) {
  return a-b;
}
int prod(int a, int b) {
  return a*b;
}
int div(int a, int b) {
  return a/b;
}