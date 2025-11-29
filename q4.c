#include <stdio.h>
#include <string.h>

#define TAM 50

int main() {
  char frase1[TAM], frase2[TAM];

  puts("fale uma frase para esse dev");
  fgets(frase1, TAM, stdin);
  
  puts("fale outra frase para esse dev");
  fgets(frase2, TAM, stdin);
  
  char cont = 0, diferente = 0;
  puts("");
  
  while (1) {
    if (frase1[cont] != frase2[cont]) {
      diferente = 1;
      break;
    }
    cont++;
    if (frase1[cont] == frase2[cont] == '\0') {
      break;
    }
  }
  
  puts("");
  puts(frase1);
  puts(frase2);

  printf(diferente ? "são iguais" : "são diferentes");
  printf("\n");

  printf("str comp: %s\n", !strcmp(frase1, frase2) ? "iguais" : "diferentes");

  return 0;
}
