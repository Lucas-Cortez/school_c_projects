#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int u, v, d;
} cor;

#define MAXSIZE 600
#define MAXSIZE_COLLEGE (((MAXSIZE) * (MAXSIZE - 1)) >> 1)

int ident[MAXSIZE];
int size[MAXSIZE];
cor college[MAXSIZE_COLLEGE];

int kruskal(int n) {
  int ans = 0, i;

  for (i = 0; i < n; i++) {
    int p = find(college[i].u);
    int q = find(college[i].v);

    if (p != q) {
      if (size[p] > size[q]) {
        int aux = p;
        p = q;
        q = aux;
      }

      ident[p] = q;
      size[q] += size[p];
      ans += college[i].d;
    }
  }

  return ans * 2;
}

int find(int item) {
  if (item == ident[item])
    return item;
  else
    return ident[item] = find(ident[item]);
}

int compare(const void *a, const void *b) {
  return ((cor *)a)->d - ((cor *)b)->d;
}

int main() {
  int n, m, o, u, v, d, i;
  
  scanf("%d %d", &n, &m);
  scanf("%d", &o);

  for (i = 0; i < m; i++) {
    scanf("%d %d %d", &college[i].u, &college[i].v, &college[i].d);
  }

  for (i = 0; i <= n; i++) {
    ident[i] = i, size[i] = 1;
  }

  qsort(college, m, sizeof(cor), compare);

  printf("%d\n", kruskal(m));

  return 0;
}