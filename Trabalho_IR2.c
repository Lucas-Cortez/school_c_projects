#include <stdio.h>

    float CalcIR(float salario, float *Old, float *New){
    	
        float Diff = 0;
        int filhos;
        
        printf("Possui quantos filhos? : ");
        scanf("%d", &filhos);
		
		//Esta parte calcula o INSS e desconta do salario
        if (salario <= 1045) 
            salario*=0.925;
        else 
			if (salario <= 2089.60) 
                salario*=0.91;
            else 
				if (salario <= 3134.4)
                	salario*=0.88;
                else 
					if (salario <= 6101.06)
                		salario*=0.88;
                	else 
                		salario-=713.09;
         
		//Esta parte verifica se o individuo possui filhos e desconta do salario       
        if (filhos) 
        	salario -= filhos*189.59;
        
        //Esta parte calcula o imposto de renda na tabela atual
        if (salario <= 1903.98)
            *Old = 0;     
        else 
			if (salario <= 2826.65)
                *Old = salario * 0.075 - 142.8;  
            else 
				if (salario <= 3751.05)
                    *Old = salario * 0.15 - 354.8;   
                else 
					if (salario <= 4664.68)
                        *Old = salario * 0.225 - 636.13;   
                    else
                            *Old = salario * 0.275 - 869.36;
        
        //Esta parte calcula o imposto de renda na tabela corrigida e ja calcula a diferença
        if (salario <= 3881.65) {
            *New = 0;
            Diff = *Old - *New;
        } else 
			if (salario <= 5714.11){
                *New = salario * 0.075 - 291.12;
                Diff = *Old - *New;
            } else 
				if (salario <= 7654.67){
                    *New = salario * 0.15 - 719.68;
                    Diff = *Old - *New;
                } else 
					if (salario <= 9564.42){
                        *New = salario * 0.225 - 1293.78;
                        Diff = *Old - *New;
                    }
                    else {
                            *New = salario * 0.275 - 1772.01;
                            Diff = *Old - *New;
                    }
        
        return Diff;
    }

    int main(){
        
        float salario, A, B, retorno;
        
        printf("Coloque seu Salario Bruto: ");
        scanf("%f", &salario);
        
        retorno = CalcIR(salario, &A, &B);
        
        printf("\nValor do Imposto ATUAL com INSS descontado: R$%.2f\n\nValor do Imposto CORRIGIDO com INSS descontado: R$%.2f\n\nDiferenca a mais: R$%.2f\n", A, B, retorno);
    
        return 0;
    }
