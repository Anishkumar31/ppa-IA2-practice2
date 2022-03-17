#include<stdio.h>

typedef struct triangle
{
  float b,a,area;
}Triangle;

Triangle input_triangle(){
  Triangle t;
  printf("Enter the base and altitude :");
  scanf("%f %f",&t.b,&t.a);
  return t;
}
void find_area(Triangle *t){
  t->area=(0.5*(t->b)*(t->a));
}
void output(Triangle t){
  printf("The area of triangle with base = %.3f and altitude = %.3f is %0.3f",t.b,t.a,t.area);
}
int main(){
  Triangle ABC;
  ABC = input_triangle();
  find_area(&ABC);
  output(ABC);
}