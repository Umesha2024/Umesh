#include <stdio.h>
void main()
{
  int n,i;
  char str[50];
  printf("Enter no. of element :");
  scanf("%d",&n);
  printf("Enter string :");
  scanf("%s",str);
  for(i=1;i<=n;i++)
    printf("%c\n",str[i]);
}