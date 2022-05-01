#include <stdio.h>
#include <stdlib.h>

struct team{
    int team;
    int points;
};

void shellsort(struct team *a, int size) {
    int i , j;
    struct team value;
    int gap = 1;
    
    do {
        gap = 3*gap+1;
    } while(gap < size);
    
    do {
        gap /= 3;

        for(i = gap; i < size; i++) {
            value = a[i];
            j = i - gap;
                
            while (j >= 0 && value.points > a[j].points) {
                a[j + gap] = a[j];
                j -= gap;
            }

            a[j + gap] = value;
        }

    } while(gap > 1);
}


int main () {

    int n, instancia=0;

    scanf("%d", &n);

    while (n>0) {
        struct team teams[n];
        int i=0, linhas;
        instancia += 1;

        for(i=0;i<n;i++) {
            teams[i].team = i+1;
            teams[i].points = 0;
        }

        linhas = (n*(n-1))/2;

        for(i=0;i<linhas;i++) {
            int a, pa, b, pb;

            scanf("%d %d %d %d", &a, &pa, &b, &pb);

            if(pa>pb) {
                teams[a-1].points += 2;
                teams[b-1].points += 1;
            } else {
                teams[a-1].points += 1;
                teams[b-1].points += 2;
            }
        }

        shellsort(teams, n);

        printf("Instancia %d\n", instancia);

        for(i=0;i<n;i++) {
            printf("%d ", teams[i].team);
        }

        printf("\n");

        scanf("%d", &n);
    }

    getchar();

    return 0;
}
