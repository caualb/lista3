#include <stdio.h>
#include <string.h>

#define TAM 10
#define TAM_2 TAM*2

int main() {
  char palavra1[TAM], palavra2[TAM];
  
  puts("string 1: ");
  fgets(palavra1, TAM, stdin);
  
  puts("string 2: ");
  fgets(palavra2, TAM, stdin);
  
  char string_junta[TAM_2], i;
  while (1) {
    if (palavra1[i] != '\0') {
      string_junta[i] = palavra1[i];
    } else {
      break;
    }
    
    i++;
  }

  char j = 0;
  
  while (1) {
    if (palavra2[j] != '\0') {
      string_junta[i] = palavra2[j];
    } else {
      string_junta[i] = '\0';
      break;
    }
    
    i++;
    j++;
  }
