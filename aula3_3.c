//Calcule o salário de um vendedor ao final do mês. O salário final será o salário fixo mais
//15% sobre as vendas efetuadas. Os dados de entrada serão o salário fixo e o valor total
//das vendas efetuadas no mês.

#include <stdio.h>
int main()
{
  float salarioFixo;
  float totalVendas;
  float salarioFinal;
 
  
    scanf("%f", &salarioFixo);
    scanf("%f", &totalVendas);
    
    salarioFinal=salarioFixo+(totalVendas*0.15);
    
    printf("Salario Final= %f\n", salarioFinal);
}
