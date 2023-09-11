#include <stdio.h>

int main(){
  int * x;
  int y = 10;

  x = &y;

  printf("Ola mundo cruel 2!!!\n");
  printf("enderedo y = %p\n", &y);
  printf("ponteiro x = %p\n", x);
  printf("conteudo x = %d\n", *x);
  return 0;

}
