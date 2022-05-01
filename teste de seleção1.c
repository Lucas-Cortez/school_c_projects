//19231899		1044	Múltiplos	Presentation error	C	0.000	18/08/2020 21:12:27

#include <stdio.h>
 
int main() {
 
   int a, b, c, d;
   
   scanf("%d %d %d %d", &a, &b, &c, &d);
   
   if ((b>c) && (d>a) && (c+d>a+b) && (c>0) && (d>0) && (a%2 == 0)) {
   	printf("Valores aceitos");
   } else {
   	printf("Valores nao aceitos");
   }
     
    return 0;
}
