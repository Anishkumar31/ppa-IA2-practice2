#include <stdio.h>
int input()
{
  int n;
  printf("enter the value of n:\n");
  scanf("%d",&n);
  return n;
}

void aray(int n,int a[10])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter elements %d :\n",i);
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
   int i,k,sum=0,count;
  for(i=0;i<n;i++)
 {
  count=0;
   for(k=1;k<a[i];k++)
     {
       if((a[i]%k)==0);
       count=count+1;
     }
   if(count>2)
     sum=sum+a[i];
   }
  return sum;
}
void output(int sum)
{
  printf("the sum is %d",sum);
    
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result = sum_composite(n,a);
  output(result);
  return 0;
  
}  
