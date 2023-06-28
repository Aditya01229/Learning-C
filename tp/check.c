#include <stdio.h>
int main(int argc, char const *argv[])
{
  int a = 15;
  int b = 10;
  a = b++;
  printf("%d %d %d %d", a++, b++, a, ++b);
  return 0;
}
