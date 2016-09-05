//O antigo filósofo grego Zeno é, talvez, melhor conhecido pelo paradoxo de Aquiles e a tartaruga. Aquiles e
//a tartaruga disputam uma corrida. Aquiles corre dez vezes mais rápido do que a tartaruga, porém a
//tartaruga tem M metros de vantagem. Pode-se argumentar que Aquiles nunca ultrapassará a tartaruga, pois,
//quando ele atingir o ponto onde a tartaruga estava, ela já estará um pouco à frente.
//Faça um programa para calcular se Aquiles ultrapassará a tartaruga e, em caso positivo, o tempo no
//qual Aquiles deixará a tartaruga para trás.

#include <stdio.h>
int main()
{
    
    int m_vant,aqui=1,tart=0;

    printf("Diga quantos metros de vantagem a tartaruga tem.\n");
    scanf("%d",&m_vant);
    
    tart = tart + m_vant;
    do
    {
    
    for(aqui=1;aqui>=tart;aqui++)
    {
        tart++;
        aqui = aqui * 10;
    }
     
    }while(aqui<=tart);
    
    return 0;
}