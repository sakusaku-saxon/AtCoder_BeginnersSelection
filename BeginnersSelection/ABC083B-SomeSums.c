#include <stdio.h>

int findSumOfDigits(int n){
  int sum = 0;

  while(n>0){
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main(void){
  int n, a, b;
  int i, res=0;

  scanf("%d %d %d", &n, &a, &b);

  //各桁の和がa以上b以下かを1つずつ判定
  for(i=0; i<=n; i++){
    int sum = findSumOfDigits(i);
    if(a <= sum && b >= sum){
      res += i;
    }
  }
  printf("%d\n", res);
  return 0;
}
