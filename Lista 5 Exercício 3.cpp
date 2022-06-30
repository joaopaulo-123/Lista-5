#include <stdio.h>

int main() {
  int n, contador, fatorial; 
   printf("\n\tcalculo do fatorial de um numero\n");
  printf("\ndigite um inteiro :");
  scanf("%d", &n);
  fatorial = 1;
  contador = 2;
  while (contador <= n) {
    fatorial = fatorial * contador;
    contador = contador + 1;
  }
  printf("o valor de %d!: %d\n", n, fatorial);
  return 0;
}
