#include <stdio.h>

	float CalcIR(float salario, float *Old, float *New){
	    float Diff = 0;
	    
	    
	    if (salario <= 1903.98)
	        *Old = 0; 
	        
	    else if (salario <= 2826.65)
	    		*Old = salario * 0.075; 
				  
	    	else if (salario <= 3751.05)
	        		*Old = salario * 0.15; 
					  
	    		else if (salario <= 4664.68)
	        			*Old = salario * 0.225;   
	    			else
	        				*Old = salario * 0.275;
	    
	    
	    
	    if (salario <= 3881.65){
	        *New = 0;
	        Diff = *Old - *New;
	    }
	    else if (salario <= 5714.11){
		        *New = salario * 0.075;
		        Diff = *Old - *New;
		    }
		    else if (salario <= 7654.67){
			        *New = salario * 0.15;
			        Diff = *Old - *New;
	    		}
			    else if (salario <= 9564.42){
				        *New = salario * 0.225;
				        Diff = *Old - *New;
			   		}
				    else{
					        *New = salario * 0.275;
					        Diff = *Old - *New;
				    }
	    
	    return Diff;
	}

	int main(){
	    
	    float salario, A, B, retorno;
	    
	    scanf("%f", &salario);
	    
	    retorno = CalcIR(salario, &A, &B);
	    
	    printf(" Valor do Imposto ATUAL R$%.2f\n Valor do Imposto CORRIGIDO R$%.2f\n Diferenca a mais R$%.2f\n", A, B, retorno);
	
	    return 0;
	}
