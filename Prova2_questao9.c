#include <stdio.h>

	void aluno(int *x, int *y){
	
	    int z;
	
	    z = *x;
	    *x = *y;
	    *y = z;
	}

	int main () {
	
	    int x, y;
	    
	    scanf("%d %d", &x, &y);
	
	    aluno(&x, &y);
	
	    printf("%d %d", x, y);
	
	    return 0;
	}
