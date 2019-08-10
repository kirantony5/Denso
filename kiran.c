#include <stdio.h>
int main()
{
    int p, d, final_p=0,discount_p;
    scanf("%d %d",&p,&d);
    final_p = p;
    
    
    while(p>9)
    {
        discount_p =(p*d)/100;
        final_p = (final_p) + (p - discount_p);
        p = p - discount_p;
    }
    
    printf("%d",final_p);
    return 0;
}
