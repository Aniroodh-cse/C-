#include <stdio.h>

int main(void) {
  int n,temp,sum=0,r;
  printf("Enter the number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
    {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
    }
  if(temp==sum)
  {
    printf("The given number is an palindrome");
  }
  else
  {
    printf("The given number is not an palindrome");
  }
  return 0;
}
