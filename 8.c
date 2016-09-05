#include <stdio.h>
int main()

{
    int i,x;
    float s;
    do{
     printf("Diga o x");
     scanf("%d",&x);
    }while((x>=20) && (x<=-1));

    for(i=1;i<=20;i++)
    
        s+=1.0/ (x+(float)(i));

    printf("%.1f\n",s);
    
    
    return 0;
}