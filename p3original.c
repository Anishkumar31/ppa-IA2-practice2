#include<stdio.h>
int input_number()
{
  int n;
  printf("enter your number\n");
  scanf("%d",&n);
  return n;
}
// 1,0
int is_composite(int n)
{
  int i;
  for(i=2;i<n;i++)
 {
   if(n%i==0)
   return 0;
 }
}
void output(int n,int composite)
{
  if(composite ==0)
  {
    printf("the number is composite\n");
  }
  else
  {
    printf("the number is not composite \n");
  }
}
int main()
{
  int n,composite;
  n=input_number();
  int result=is_composite(n);
  output(n,result);
  return 0;
}
  
