#include <stdio.h>

int main(void) {
  int x;
  printf("O teste trata-se de uma pontuação de um jogo de sinuca.\n");
  scanf("%d", &x);
  if (x >= 0 && x <= 9)
    printf("Insuficiente");
  else 
    if (x >= 10 && x <= 39)
    printf("Regular");
  else
      if (x >= 40 && x <= 69)
        printf("Bom");
  else
        if (x >= 70 && x <= 90)
          printf("Ótimo");
  else
          if (x >= 91 && x <= 100)
            printf("Excelente");
  return 0;
}