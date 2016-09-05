//Leia um número da entrada (num), a seguir leia n números da entrada e imprima o maior deles
#include <stdio.h>
int main()
{
    int num,n,maior,i;
    printf("Diga a sequencia");
    scanf("%d",&num);
    printf("Entre com o numero:\n");
    scanf("%d",&n);
    maior = n;
    if(num>1)
    {
    for(i=1;i<num;i++)
    {
        printf("Entre com o numero:\n");
        scanf("%d",&n);
        if(n>maior)
            maior = n;
    }
    }
       printf("O maior Numero digitado é : %d",maior);
    return 0;
}