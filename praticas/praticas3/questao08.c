#include <stdio.h>

int main() {
  int numero
;
  printf("Entre com um numero >= 0 ");
  int deu_certo = scanf("%i", &numero);
  
  if (deu_certo && numero > 0) {
  printf("Os multiplos de %i entre 1 e 100\n" , numero);
for ( int i = 1; i < 101; i + numero) {
  printf("%i\n", i);
}
printf("%i, ", i);
  } else {
    printf("Numero invalido. Tente novamente\n");




    return 0;