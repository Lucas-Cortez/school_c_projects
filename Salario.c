// 19140499		1008	Salário	Accepted	C	0.000	11/08/2020 22:34:02

#include <stdio.h>
 
int main() {
 
 int num, hor;
 float sal, tsal;
 
 scanf("%d", &num);
 scanf("%d", &hor);
 scanf("%f", &sal);
 
 tsal = sal*hor;
 
 printf("NUMBER = %d\n", num);
 printf("SALARY = U$ %.2f\n", tsal);
 
    return 0;
}
