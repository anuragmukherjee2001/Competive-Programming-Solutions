#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,x,y,or,and,xor, X = 0, Y = 0, Z = 0;
  for(int i = 1; i <= n-1; i++){
      x = i;
      for (j = i + 1; j <= n; j++) {
      y = j;

      and = x&y;
      or = x|y;
      xor = x^y;  

      if(and < k && and > X)
      {
          X = and;
      }
      if(or < k && or > Y)
      {
          Y = or;
      }
      if(xor < k && xor > Z)
      {
          Z = xor;
      }
      }
  }
  printf("%d\n",X);
  printf("%d\n",Y);
  printf("%d",Z);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
