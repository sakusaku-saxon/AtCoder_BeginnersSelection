#include <stdio.h>

int main(void){
  int n, m;
  scanf("%d %d", &n, &m);

  int a[n], total=0; //総投票数
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    total += a[i];
  }

  int ninki=0; //人気商品に選ぶ条件を満たす商品の数
  for(int i=0; i<n; i++){
    if(a[i] * 4 * m >= total) ninki++;
  }

  if(ninki >= m) printf("Yes\n");
  else printf("No\n");

  return 0;
}
