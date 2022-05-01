#include <stdio.h>
 
	int main () {
		
		char l1, l2, l3;
		
		printf("Digite 3 caracteres maiuculos: ");
		scanf("%c %c %c", &l1, &l2, &l3);
		
		if ((l1<l2)&&(l2<l3))
			printf("%c %c %c",l1, l2, l3);
		else if ((l1<l3)&&(l3<l2))
				printf("%c %c %c",l1, l3, l2);
				else if ((l2<l1)&&(l1<l3))
					printf("%c %c %c",l2, l1, l3);
					else if ((l2<l3)&&(l3<l1))
						printf("%c %c %c",l2, l3, l1);
						else if ((l3<l1)&&(l1<l2))
							printf("%c %c %c",l3, l1, l2);
							else if ((l3<l2)&&(l2<l1))
								printf("%c %c %c",l3, l2, l1);
		
		return 0; 
	}
