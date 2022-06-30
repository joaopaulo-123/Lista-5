#include <stdio.h>   
#include <stdlib.h>  

float recebe(float altura,char sexo);
int main(void)
{
    float altura;
    char sexo;
     printf("Informe qual é a sua altura: ");
    scanf("%f", &altura);
    printf("\n");
     system("cls");
    printf("Informe o sexo M para Masculino e F para Feminino: ");
    scanf("%c", &sexo);     
    float  recebe(float altura,char sexo)
       {
        float ideal;
         if(sexo=='m')
           {
             ideal=(72.7 * altura )- 58;
             printf("\nO peso ideal é: %f",ideal);
             }
             else
         if(sexo=='f')
               {
                ideal=(62.1 * altura) - 44.7;
                printf("\nO peso ideal é: %f",ideal);
                }
}
    printf("\n \n");
    system("pause");     
}
