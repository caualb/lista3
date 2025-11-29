#include <stdio.h>

#define TAM 100

int main() {
  char frase[TAM];

  puts("frase: ");
  fgets(frase, TAM, stdin);

  printf("\nolha o reverso\n");
  
  char flag = 0, i = TAM-1;
  while (i >= 0) {
    if (flag) {
      printf("%c", frase[i]);
    }
    if (frase[i] == '\n') {
      flag = 1;
    }
    i--;
  }

  puts(" ");

  return 0;
}
