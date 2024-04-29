#include <stdio.h>

int main() {
  int avaliacao;
  
  printf("Entre com a avaliaçao do motorista entre 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);

  if (avaliacao == 1) {
    printf("Omotorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf("Omotorista ganhou **\n");
    } else if (avaliacao == 3) {
      printf("Omotorista ganhou ***\n");
    } else if (avaliacao == 4) {
      printf("Omotorista ganhou ****\n");
    } else if (avaliacao == 5) {
      printf("Omotorista ganhou *****\n");
  } else {
    printf("Avaliaçao invalida. Tente novamente!\n");
  }
  return 0;
}