#include <stdio.h> 
#include <string.h> 
#define TAM 20

int main() {
  char palavra[TAM], letra;
  
  puts("uma palavra");
  fgets(palavra, TAM, stdin);

  puts("uma letra");
  scanf(" %c", &letra);

  if (strchr(palavra, letra)) {
    printf("letra \"%c\" encontrada em ", letra);
    puts(palavra);
  } else {
    printf("letra \"%c\" não encontrada em ", letra);
    puts(palavra);
  }
  
  return 0;
}
