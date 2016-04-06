#include <cstdio>

int main() {
  int a = 10;

  int *p = &a;

  printf("pointer value *p       = %d\n", *p);
  printf("pointer address p      = %p\n", p);
  printf("a's address with &a    = %p\n", &a);
  printf("pointer own address &p = %p\n", &p);

  char b = 'b';

  // error: cannot convert ‘char*’ to ‘int*’ in assignment
  // p = &b;

  return 0;

}

