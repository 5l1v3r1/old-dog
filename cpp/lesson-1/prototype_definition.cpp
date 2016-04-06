#include <cstdio>

void foo(int i); // can be `void foo(int)`

int main() {
  foo(1);
}

void foo(int i) {
  printf("number is %d\n", i);
}
