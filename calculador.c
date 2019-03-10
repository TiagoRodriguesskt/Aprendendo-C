#include <stdio.h>
#include <math.h>

int main() {
  int a, b, mult, divi, soma, subt;

  printf("\t\t\t <<<CALCULADORA 1.0.>>> \n\n");

  printf("Digite o primeiro numero: \n");
  scanf("%d", &a);
  printf("Digite o segundo numero: \n");
  scanf("%d", &b);

  /*IMPRIMINDO OS RESULTADOS*/

  mult = a * b;
  divi = a / b;
  soma = a + b;
  subt = a - b;

  printf("\nRESULTADOS\n\n");

  printf("Multiplicacao de %d * %d = %d \n", a, b, mult);
  printf("Divisao de %d / %d = %d \n", a, b, divi);
  printf("Soma de %d + %d = %d \n", a, b, soma);
  printf("Subtracao de %d - %d = %d \n", a, b, subt);
}
