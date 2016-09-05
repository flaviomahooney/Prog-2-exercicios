//Ler um número (limite superior), um incremento e outro número (limite inferior). Exiba os números
//compreendidos entre o limite inferior e o limite superior (inclusive os limites), considerando o incremento.
//Ex:
//Valores lidos: 11 (limite inferior)
//4 (incremento)
//25 (limite superior)
#include <stdio.h>
int main()
{
    int inf, sup,inc,i;
        
        printf("Entre com o limite inferior");
        scanf("%d",&inf);
        
        printf("Entre com o limite superior");
        scanf("%d",&sup);
        
        
        printf("Entre com o incremento");
        scanf("%d",&inc);
        
        if(inc<1)
             printf("incremento invalido\n");
        if(inf>sup)
            printf("limites invalidos\n");
        if(inf==sup)
        printf("%d",inf);
   
        else
    {
        do
        {
            printf("%d\n", inf);
            inf = inf + inc;
        }while(inf<=sup);
    }
    
 return 0;
}