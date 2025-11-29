#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 20

int main() {
  int vetor[TAM];

  srand(time(NULL));
  for (char i = 0; i < TAM; i++) {
    vetor[i] = (rand() % MAX);
  }
  printf("vetor: [");
  for (char i = 0; i < TAM; i++) {
    printf("%d", vetor[i]);
    if (i != TAM - 1) {
      printf(", ");
    } else {
      printf("]\n");
    }
  }

  float media_a = 0, media_g = 1;
  for (char i = 0; i < TAM; i++) {
    media_a += (float) vetor[i] / TAM;
    media_g *= pow(vetor[i], (float) 1 / 2);  
  }

  printf("Média aritmética: %.3f\n", media_a);
  printf("Média geométrica: %.3f\n", media_g);

  return 0;
}
