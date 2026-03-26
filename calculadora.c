#include <stdio.h>
#include <math.h>
int main() {
    
    while(1){

        float n1, n2;
        int op, resp;
        

        printf("                                                                                                      \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("BEM VINDO A MELHOR CALCULADORA DO BRASIL\n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        
        printf("                                                                                                      \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("1 PARA SOMA\n");
        printf("2 PARA SUBTRACAO\n");
        printf("3 PARA MULTIPLICACAO\n");
        printf("4 PARA DIVISAO\n");
        printf("5 PARA POTENCIACAO\n");
        printf("6 PARA RAIZ QUADRADA\n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("                                                                                                      \n");
        

        printf("Digite os valores desejados: ");
        scanf("%f %f", &n1, &n2);

        printf("Digite o numero da operacao desejada: ");
        scanf("%d", &op);

        switch (op) {
            case 1: 
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);  
            break; 

            case 2:
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
            break;

            case 3:
            printf("%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
            break;

            case 4:
            if (n2 != 0){ 
                printf("%.2f / %.2f = %.2f\n", n1, n2, (float) n1 / n2);
                }
            
            else{
                printf("Erro: divisao por zero\n");
                }
            break;

            case 5: 
            printf("%.2f elevado a %.2f = %.2f\n",n1,n2, pow(n1,n2));
            break;

            case 6:
            if(n1>0){
                printf("Raiz quadrada de %.2f = %.2f\n", n1, sqrt(n1));
            }

            else{
                printf("Erro: numero menor que zero\n.");
            }
            break;    
            
            default:
            printf("Operacao invalida");
            break;
        
        }  

        printf("DESEJA CONTINUAR? (1 PARA SIM E 0 PARA NAO) ");
        scanf("%d", &resp);

        if(resp == 0){
            printf("Fim da Calculadora! ");
            break;
        }
    }
}
