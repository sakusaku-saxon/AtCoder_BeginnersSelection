#include <stdio.h>

void SwapInt(int *a, int *b){
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;

  return;
}

int main(void){
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  SwapInt(&a, &b);
  SwapInt(&a, &c);

  printf("%d %d %d\n", a, b, c);
  return 0;
}
