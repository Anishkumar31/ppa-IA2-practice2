#include<stdio.h>
#include <string.h>
void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}

char *str_reverse(char *str)
{
  int length;
  char t;
  for (length = 0; str[length] != '\0'; length++);
  
  for (int i = 0; i < length; i++,length--)
  {
    t = str[i];
    str[i] = str[length];
    str[length]=t;
  }
  return str;
}

void output(char *a, char *reverse_a)
{
  printf("The reverse of %s is %s\n", a, reverse_a);
}

int main()
{
  char str[10];
  input_string(str);
  char t_str[10];
  strcpy(t_str,str);
  output(t_str, str);
  return 0;
}