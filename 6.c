//Considerando-se um rebanho composto por animais, desenvolver um programa em C para ler as seguintes
//informações: PESO (em Kg), SEXO (M ou F) e IDADE (flag: PESO inválido). Exiba:
//- o animal mais magro e sua idade;
//- a quantidade de animais machos;
//- quantos animais possuem idade superior a 3 anos e meio.

#include <stdio.h>
int main()
{
    int x,i,z,cont;
    float peso[3],idade[4],magro;
    char sex[1][4];
    
    printf("Diga o peso do animal 1:\n");
    scanf("%f",&peso[0]);
    peso[0] =  magro;
    for(i=1;i<=3;i++)
    {
        printf("Diga o peso do animal %d",i+1);
        scanf("%f",&peso[i]);
        
        if(peso[i] < magro)
        magro = peso[i];
    }
    
    for(x=0;x<=3;x++)
    {
        printf("Diga a idade do animal %d", x+1);
        scanf("%f",&idade[x]);
        
        if(idade[i] > 3.5)
        cont++;
    }
    
    
return 0;
}