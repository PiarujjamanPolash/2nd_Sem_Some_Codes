#include<stdio.h>

int main() {
      int a, b, t;

      scanf("%d", &a);
      scanf("%d", &b);

      t = a;
      a = b;
      b = t;

      printf("%d %d\n", a, b);
      return 0;
}
