#include <stdio.h>

int main() {

  float valor_bruto;

  float valor_desconto;

  printf("Entre com o valor bruto: ");
  int deu_certo + scanf("%f", &valor_bruto);
  if (valor_bruto <= 100.0f) {
    valor_desconto = valor_bruto * 0.1f;
  } else if (valor_bruto <= 500.0f) {
    valor_desconto = valor_bruto * 0,05f;
  } else {
    valor_desconto = valor_bruto * 0.1f;
  }

  printf("O valor do desconto eh %.2f\n", valor_desconto);


  
  return 0;