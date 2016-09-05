//11. Leia um número e calcule o seu fatorial. Verifique se o valor encontrado é par ou ímpar e/ou primo. Exibir

#include <stdio.h>
int main()

{
    int num,fat=1,i;
    printf("Diga o número fatorial.");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    fat = fat * i;
    
    printf("!%d  =  %d\n",num,fat);
    
    if((fat%2)==0)
    printf("Número par");
    
    else
    printf("Número impar");
    
    return 0;
}