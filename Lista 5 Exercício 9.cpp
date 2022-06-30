#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota1, nota2,nota3, media;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
         do{
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
    }while(nota2 < 0 || nota2 > 10);
         media = (nota1 + nota2) / 2;
         printf("Nota final: %.2f\n", media);
}
  else{
   if(media>=6 e freq>=75))
   printf("Aprovado")
   if(media<6 e media>=4)
   printf("fina")
   if(media<4)
   printf("reprovado")
}
