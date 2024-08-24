//4 Leia um valor que foi depositado na poupança e exiba o valor com o rendimento após um
//mês. Considere que a taxa de juros da poupança é de 0,7% ao mês.

#include <stdio.h>
int main()
{
    float valorDepositado;
 
    scanf("%f", &valorDepositado);
    
    valorDepositado+=valorDepositado*0.7/100;
    
    printf("Valor atual= %f\n", valorDepositado);
}
