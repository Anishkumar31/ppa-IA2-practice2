#include <stdio.h>
//#include<string.h>
void input_string(char *a)
{
  printf("enter any word : ");
  scanf("%s",a);
}
char* str_reverse(char *a)
{
  int m=0;
  char h;
  for(int i=0;a[i]!='\0';i++){
    m++;
  }
  for(int i=0;i<m/2;i++){
    h=a[i];
    a[i]=a[m-i-1];
    a[m-i-1]=h;
  }
  return a;
}
void output(char *ab){
  printf("\n");
  printf("Before reverse = %s\n",ab);
  printf("After reverse = %s\n",str_reverse(ab));
}
int main(){
  char *a,*r; 
  input_string(a);
  r=a;
  output(r);
  return 0;
}