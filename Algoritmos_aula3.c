
//Leia dois valores para as variáveis A e B e efetua a troca dos valores de forma que a
//variável A passe a ter o valor da variável B e a variável B passe a ter o valor da variável A.
//Apresente os valores trocados

#include <stdio.h>
int main()
{
  int a =1;
  int b =2;
  int temp;
  
   scanf("%d", &a);
   scanf("%d", &b);
   temp=a;
   a=b;
   b=temp;
   printf("valor a= %d\n",a);
   printf("valor b= %d",b);
}
