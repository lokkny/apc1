#include <stdio.h>

int main() {

   float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;

  float valor_do_imposto_renda = valor_salario_bruto * IR;
  float valor_providencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_do_imposto_renda - valor_providencia;

  printf("---------------------------\n");
  printf("  C O N T R A C H E Q U E   \n");
  printf("----------------------------\n");
  printf("Salario Bruto...: %14.2f\n", valor_salario_bruto);
  printf("Imposto renda...: %14.2f\n", valor_do_imposto_renda);
  printf("Imposto previ...: %14.2f\n",valor_providencia);
  printf("valor_salario_liquido.: %14.2f\n", valor_salario_liquido);
  
  





  return 0;
}