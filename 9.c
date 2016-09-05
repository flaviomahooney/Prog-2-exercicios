#include <stdio.h>
int main()

{
    int a,i;
    float s=0;
    
   do{
    printf("Diga o a");
    scanf("%d",&a);
   }while(a<=0);
   
   for(i=0;i<a;i++)
    {  
        s+=(float)(i+1)/(float)(a-i);
        printf("%.1f",s);
    }
    
    return 0;   
}