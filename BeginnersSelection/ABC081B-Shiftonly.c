#include <stdio.h>

int main(void){
  int n; //黒板の数字の数を記録
  int i, flag=0; //ループ処理用

  scanf("%d", &n);

  int a[n]; //黒板の数字そのものを記録
  int count=-1; //何回操作をできたか記録

  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }

  while(flag == 0){
    for(i=0; i<n; i++){
      if(a[i]%2 == 0) a[i] = a[i]/2;
      else {
        flag = 1;
        break;
      }
    }
    count++;
  }

  printf("%d\n", count);
  return 0;
}
