//Imprima os números pares e a soma dos números ímpares compreendidos entre A e B (exclusive).
#include <stdio.h>
int main()
{
    int a,b,i,soma=0;
    printf("Diga um numero");
    scanf("%d",&a);
    printf("Diga outro numero");
    scanf("%d",&b);
    
    if(a<b)
        for(i=a+1;i<b;i++)
            if(i%2==0)
                printf("%d\n",i);
            else
        soma+=i;
    else
        for(i=a-1;i>b;i--)
            if(i%2==0)
         printf("%d\n",i);
    else
        soma+=1;
        printf("Somatorio dos impares: %d\n",soma);
     
     return 0;
}