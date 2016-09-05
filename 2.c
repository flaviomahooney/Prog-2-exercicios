//Faça um programa em C que leia diversos números e exiba o seu fatorial. O programa encerra ao digitar
//um valor inválido.
#include <stdio.h>
int main()
{
    int fat=1, i ,num;
    do
    {
        printf("Diga um o fatorial");
        scanf("%d",&num);
      
        if(num<0)
        {
            printf("Número inválido");
        }
        if(num==0)
        {
           printf("!0 = 1");
        }
       
        if(num>0)
        {
            for(i=1;i<=num;i++)
                fat = fat * i;
            printf("!%d = %d \n",num,fat);
            fat=1;
        }
        
    }while(num>=0);
    return 0;
}