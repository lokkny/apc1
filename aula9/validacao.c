#include <stdio.h>

int main() {

  int numero;
  int numero_valido = 0;

  while (numero_valido) {
  printf(" Entre com um numero entre 1 e 10");
  int deu_certo = scanf("%i", &numero);

  int numero_valido = deu_certo && numero >= 1 && numero <= 10;
  if (numero_valido == 0) {
    
    printf("deu errado\n");
    getchar(); // limpar o bagulho
  }
    
  }
  printf("Deu certo!\n");
  
  return 0;
}