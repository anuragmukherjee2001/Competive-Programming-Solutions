#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float e,f,g,h;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&e,&f);
    c=a+b;
    d=a-b;
    g = e+f;
    h=e-f;
    printf("%d %d",c,d);
    printf("\n%0.1f %0.1f",g,h);
    
    return 0;
}
