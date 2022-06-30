#include <stdio.h>

int main(){
  int x, n, potencia, contador; 
  printf("\n\tcalculo de potencias\n");
  printf("\ndigite um numero inteiro:");
  scanf("%d", &x);
  printf("digite um numero um inteiro:");
  scanf("%d", &n);
  potencia = 1;
  contador = 0;
  while (contador != n)
    potencia = potencia * x;
    contador = contador + 1;
  printf("\n o valor de %d elevado a %d: %d\n", x, n, potencia);
     return 0;
}
