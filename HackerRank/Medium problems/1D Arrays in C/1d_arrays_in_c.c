#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a[10000],i,sum=0;
    scanf("%d",&n);
    //printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    printf("%d",sum);
        
    return 0;
}
