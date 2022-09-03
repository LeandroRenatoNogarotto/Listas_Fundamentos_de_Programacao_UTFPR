#include <stdio.h>
#include <stdlib.h>

int decomposicao(int num);
int main() {
  int num;
  printf("Digite um numero\n");
  scanf("%d",&num);
  printf("%d", decomposicao(num));
  }
int decomposicao(int num) {
  while(num != 1) {
    if(num % 2 == 0) {
      num = num / 2;
    }
    else if(num % 3 == 0) {
      num = num / 3;
    }
    else if(num % 5 == 0) {
      num = num / 5;
    } else {
      return 0;
    }
  }
  return 1;
}
