#include <stdio.h>

int main() {
int quantidade;
printf("Entre com a quantidade de numeros a serem lidos: ");
  int deu_certo = scanf("%i", &quantidade);
  if(deu_certo && quantidade > 0) {
    for(int i = 1; i <= quantidade; i++) {
      int numero;
      printf("Entre com o %i numero: ", i);
      deu_certo = scanf("%i", &numero);
    }
  } else {
    printf("Quantidade invalida. Tente novamente\n");
  }
  
  return 0;