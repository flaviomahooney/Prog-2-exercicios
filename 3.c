//Ler 4 números, calcular a média aritmética dos mesmos e imprimir dentre os 4, os números acima da
//média calculada.

#include <stdio.h>
int main()
{
    int x,y,z,n,soma,media;
    printf("Diga 1 numero\n");
    scanf("%d",&x);
    printf("Diga 2 numero\n");
    scanf("%d",&y);
    printf("Diga 3 numero\n");
    scanf("%d",&z);
    printf("Diga 4 numero\n");
    scanf("%d",&n);
    
    soma = x + y + z + n;
    media = soma / 4;
    
    printf(" A média é :%d\n",media);
    
    if(x>media)
    printf("%d\n",x);
    if(y>media)
    printf("%d\n",y);
    if(z>media)
    printf("%d\n",z);
    if(n>media)
    printf("%d\n",n);
    
    return 0;
}