//Um fazendeiro comprou um lote de V vacas e C cabras (V > C), todas em lactação. Sabendo-se que cada
//vaca produz 840 kg de leite por mês e que cada cabra produz 150 kg de leite por mês. Elaborar um
//programa que exiba em quantos meses o grupo de cabras irá ultrapassar a produção mensal das vacas, se o
//fazendeiro comprar uma vaca e dez cabras a cada mês, e qual será a diferença no mês de ultrapassagem.

#include <stdio.h>
int main()

{
     float l_vaca,l_cabra;
     int vaca,cabra,mes,i;
    printf("Diga o numero de vacas\n");
    scanf("%d",&vaca);
    do
    {
    printf("Diga o numero de cabras\n");
    scanf("%d",&cabra);
    }while(cabra<vaca);
     
      
   for(mes=0;l_cabra<l_vaca;mes++)
    {
      l_vaca = vaca * 840;
      l_cabra = cabra * 150;
    }
    if(l_cabra>l_vaca)
        printf("A produção de leite de cabra é maior que a de vaca.\n");
    
    if(l_vaca>l_cabra)
        printf("A produção de leite de vaca ainda é maior que a de cabra.\n");
    
    if(mes>=1)
        printf("A produção de leite de cabra ultrapassou a de vaca.%d",mes);
    
    if(mes<=0)
        printf("A quantidade de leite de vaca nao passou a de cabra.");
    
    return 0;
}