float BuscaSequencial(turmaMAT *alunos, int raPesquisa, int qde) {
    int i;
    for(i=0;i<qde;i++){
        if(raPesquisa == alunos[i].ra)
            return ((3 * alunos[i].prova)+alunos[i].traba)/4;
    }

    return -1;
}


