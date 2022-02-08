#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the side of the tingle\n");
  scanf("%d",&n);
  return n;
}

// 1 ,0
int check_scalene(int a,int b,int c)
{
 if(a!=b && b!=c && c!=a)
 {
   return 1;
 }
 else
 {
   return 0;
 }
}
void output(int isScalene)
{
 if(isScalene == 1)
 {
   printf("the  tringle is Scalene\n");
 }
 else
 {
   printf("the tringle is not scalene");
 }
}
int main()
{
  int a=input_side();
  int b=input_side();
  int c=input_side();
  int result=check_scalene(a,b,c);
  output(result);
  return 0;
}
