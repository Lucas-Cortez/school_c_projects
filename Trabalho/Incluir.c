void incluir(GRAPH *g, int vertice1, int vertice2, int peso, int ehdigrafo) {

  if(ehdigrafo) {
    g[vertice1][vertice2]->adj = 1;
    g[vertice2][vertice1]->adj = 1;
    g[vertice2][vertice1]->weight = peso;
    g[vertice1][vertice2]->weight = peso;
  } else {
    g[vertice1][vertice2]->adj = 1;
    g[vertice2][vertice1]->adj = 0;
    g[vertice2][vertice1]->weight = peso;
  }
}
