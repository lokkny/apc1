#include <stdio.h>

int main() {

int opcao;
  
  printf("MENU PRINCIPAL\n");
  printf("1 - consultar saldo\n");
  printf("2 - recarregar saldo\n");
  printf("3 - ligações recebidas\n");
  printf("4 - ligações feitas\n");
  printf("0 - sair\n");
  printf("Entre com uma opção: ");
  int deu_certo = scanf("%i", &opcao);
  
  switch(opcao){
case 1:
printf("Seu saldo é de R$10.00\n");
break;
    case 2: {
  float valor;
  printf("Entre com o valor da recarga\n");
  deu_certo = scanf("%f", &valor);
  break;
}

case 3: {
  printf("As 5 ultimas ligações recebidas\n");
  printf("9999-9999\n");
  printf("8888-8888\n");
  printf("6666-6666\n");
  break;
}
case 4: {
  printf("As 5 ultimas ligações feitas\n");
  printf("9999-9999\n");
  printf("8888-8888\n");
  printf("6666-6666\n");
  break;
}
case 0:
  printf("Até logo!\n");
  break;
default:
  printf("Opção invalida. Tente novamente\n");
}

return 0;

  }  