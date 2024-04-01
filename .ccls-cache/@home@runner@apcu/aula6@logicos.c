#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  // 0 < numero1 > 10
  int maior_que_zero_menor_que_dez = 0<numero1 && numero1<10;
 printf( "O 1o numero é maior que zero e menor que dez? %i\n", maior_que_zero_menor_que_dez);

   // 0 < numero1, numero1 > 10
    int menor_que_zero_maior_que_dez = 0<numero1 && numero1<10;
   printf( "O 1o numero é maior que zero e menor que dez? %i\n", menor_que_zero_maior_que_dez);

  // negação
  int nao_he_maior_que_zero = !(numero1 > 0);
  printf("O 1o numero é maior que zero? %i\n",nao_he_maior_que_zero);
  return 0;
}