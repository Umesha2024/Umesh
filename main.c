#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50],str2[50];
  printf("enter string1 : ");
  scanf("%s",str1);
  printf("Enter string2 : ");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("%s",str1);
}