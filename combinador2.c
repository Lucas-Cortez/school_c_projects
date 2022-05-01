#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[55], b[55], rt[255];
    int n, h, auxa=0, auxb=0,i=0,j=0,z,y,p;
    
    scanf("%d", &n);
    
    for(h = 0; h < n; h++) {
        scanf("%s %s",&a,&b);

        n, h, auxa=0, auxb=0,i=0,j=0,z=0,y=0,p=0;

        auxa=strlen(a);
        auxb=strlen(b);

        if(auxa<auxb){
            while(i<=(auxa*2)){
                rt[i]=a[j];
                i++;
                rt[i]=b[j];
                j++;
                i++;
            }

            i-=2;
            z=(auxb-auxa);

            for(y=auxb-z;y<auxb;y++){
                rt[i]=b[y];
                i++;
            }

            p=auxa+auxb;

            for(i=0;i<p;i++){
                if(i==(p-1))
                    printf("%c\n",rt[i]);
                else
                    printf("%c",rt[i]);
            }   

        }

        if(auxa>auxb){
            while(i<=(auxb*2)){
                rt[i]=a[j];
                i++;
                rt[i]=b[j];
                j++;
                i++;
            }
        
            i=i-2;
            z=(auxa-auxb);

            for(y=auxa-z;y<auxa;y++){
                rt[i]=a[y];
                i++;
            }
            p=auxa+auxb;
            for(i=0;i<p;i++){
                if(i==(p-1))
                    printf("%c\n",rt[i]);
                else
                    printf("%c",rt[i]);
            }   
        }

        if(auxa==auxb){
            while(i<=(auxa*2)){
                rt[i]=a[j];
                i++;
                rt[i]=b[j];
                j++;
                i++;
            }

            printf("%s\n",rt);      
        }
    }

    return 0;
}
