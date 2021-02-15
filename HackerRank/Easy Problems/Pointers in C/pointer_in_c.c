#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {

    int temp,c;
    temp = *a;
    *a = *a + *b;
    c = temp - *b;
    *b = abs(c);  

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
