#include <stdio.h>

int main () {

  printf("---------------------------\n");
  printf("  N O T A    L E G A L    \n");
  printf("----------------------------\n");
  printf("ITEM             QTD VALOR    valor\n");
  printf(" %14s %5i %13.2f\n" , "Banana naica" , 2, 20.00);
  printf(" %10s %9i %13.2f\n" , "Uva globo" , 1, 15.00);
  printf(" %10s %9i %13.2f\n" , "Laranja lima" , 1, 18.00);
  
  //printf("Banana nanica"   2     20.00\n");
  //printf(" Uva globo"      1     15.00\n");
  //printf(" Laranja lima"   1     18.00\n");

  
  printf("----------------------------\n");
  printf("TOTAL..............: %10.2f \n" , 50.00);
  
  
  return 0;
}