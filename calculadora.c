#include<stdio.h>
int main (void){
    float n1, n2;
    char op;

    printf("***CALCULADORA QUE EXECUTA AS OPERAÇÕES BÁSICAS: SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO E DIVISÃO***\n");
    printf("      ***Devem ser informados dois números reais e por último a operação desejada***\n");
    printf("\nInforme o primeiro número: ");
    scanf("%f", &n1);
    printf("Informe o segundo número: ");
    scanf("%f", &n2);
    printf("Informe a operação desejada digitando uma das seguintes opções:\n[+] para adição\n[-] para subtração\n[*] para multiplicação\n[/] para divisão\n");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("\nA soma entre %.2f e %.2f é igual a %.2f\n", n1, n2, n1+n2);
            break;
        case '-':
            printf("\nA subtração entre %f e %f é igual a %.2f\n", n1, n2, n1-n2);
            break;
        case '*':
            printf("\nA multiplicação de %f por %f é igual a %.2f\n", n1, n2, n1*n2);
            break;
        case '/':
            if (n2==0)
            printf("\nDivisão por zero!\n");
            else
            printf("\nA divisão de %.2f por %.2f é igual a %.2f\n", n1, n2, n1/n2);
            break;
        default:
            printf("\nComando invalido!\n");
        }

    return 0;
}
