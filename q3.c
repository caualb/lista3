#include <stdio.h>
#include <string.h>

#define TAM 1000

int main() {
  char frase[TAM];

  puts("Escreva uma frase para o dev desse código");
  fgets(frase, TAM, stdin);

  char contador = 0, iterador = 0, quebra_linha = 0;
  while (1) {
    if (frase[iterador] != '\0') {
      contador++;
      if (frase[iterador] == '\n') {
        quebra_linha++;
      }
    } else {
      break;
    }
    iterador++;
  }

  printf("A frase \"%s\" tem %d caractere(s) com %d quebras de linha\n", frase, contador, quebra_linha);
  printf("com strlen: %ld \n", strlen(frase));

  return 0;
}
