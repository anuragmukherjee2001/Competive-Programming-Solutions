#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    char sm[100];
    scanf("%s",sm);
    char s[110];
    getchar();
    fgets(s,110,stdin);
    printf("%c",ch);
    printf("\n%s",sm);
    
    printf("\n%s",s);
  
    return 0;
}