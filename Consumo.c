// 19140169		1014	Consumo	Accepted	C	0.000	11/08/2020 22:08:47 

#include <stdio.h>
 
int main() {
 
   int x;
   float y, media;
   
   scanf("%d", &x);
   scanf("%f", &y);
   
   media = x/y;
   
   printf("%.3f km/l\n", media);
   
    return 0;
}
