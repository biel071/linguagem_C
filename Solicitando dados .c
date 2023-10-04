#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int idade; 
    float peso;
    char sexo [300]; 
    
    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    printf("Digite seu peso:");
    scanf("%f", &peso);

    fflush(stdin); // Limpador de cache. Coso der bug tentar usar essa funcionalidade. 
    
    printf("Digite seu sexo:");
    gets(sexo);
    
system("cls || clear"); // Limpa tela, CLS para Windows e CLEAR para Linux. (Sempre colocar entre aspas)

    printf("Idade: %d anos \n", idade); 
    printf("Seu peso: %.2f kg \n", peso);
    printf("Seu sexo: %s", sexo);

    return 0;
}