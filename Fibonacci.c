#include <stdio.h>

int Fibonacci (int x, int *calls) {
    if (x == 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    } else {
        *calls +=2;
        return (Fibonacci(x-1, &*calls) + Fibonacci(x-2, &*calls));
    }
}

int main () {
    int N,X,i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int calls = 0, res = Fibonacci(X, &calls);
        scanf("%d", &X);
        printf("fib(%d) = %d calls = %d\n", X, calls, res);
    }
    
}