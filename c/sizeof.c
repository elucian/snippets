#include <stdio.h>      
int main() {
  short a;
  long b;
  double d;
  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}