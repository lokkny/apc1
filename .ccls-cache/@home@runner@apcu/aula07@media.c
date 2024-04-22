#incluitte <stdio.h>

int main () {
float nota1;
float nota2;

  printf("entrw com a primeira nota;");
  int deu_certo = scanf("%f", &nota1);

// 0.0f >= nota1 <= 10.0
if (nota1 >= 0.0f && nota1 <= 10.0f);
  printf("entre com a segunda nota: ");
  int deu_certo = scanf("%f" , &nota2);

  if (nota2 >= 0.0f && nota2 <= 10.0f);
  float media = 0.4f * nota1 + 0.6f * nota2;
  printf("A media eh %.1f\n", media);1
  
  return 0;
}