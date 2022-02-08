#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base \n");
  scanf("%f",base);
  printf("Enter the Height\n");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
}
void output(float area)
{
  printf("Area of Triangle is %f",area);
}
int main()
{
float base,height,area;
input(&base,&height);
find_area(base,height,&area);
output(area);
return 0;
}
