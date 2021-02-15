#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char x[1001],i;
    int j,c;
    scanf("%s",x);

    for(i = 48; i < 58; i++)
    {
        c = 0;
        for(j = 0; j < strlen(x); j++)
        {
            if(x[j] == i)
            c++;
        }
        printf("%d ",c);
    }

    return 0;
}
