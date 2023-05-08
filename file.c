/******************************************************************************

Pedro de Abreu Palma

2. Escreva uma função que retorne a divisão entre dois números intei
ros. Atenção para a questão da divisão por zero! A divisão não pode ocor
rer se o divisor for zero.  


*******************************************************************************/
#include <stdio.h>

int divisao(int a, int b);

float main(){
    int a,b;
    
        printf("Digite o valor dividendo e divisor: ");                              /* Digite valores*/
        scanf("%d%d",&a,&b);
        while(b==0){
        printf("Divisor não pode ser 0, digite novamente");                         /*Verifica se valores são validos*/               
            scanf("%d",&b);
        }
        
        printf("\n %d / %d = %d", a , b, divisao(a,b));                         /* Imprime resultado da função*/
        
        return 0;
        
        }
    int divisao(int a, int b){
     
        return a/b;                                                                 //Divide os valores
    }


