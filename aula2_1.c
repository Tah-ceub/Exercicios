///Faça o teste de mesa e mostre o último valor armazenado em cada uma das variáveis.
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 float x,y=2.5;
 int a,b=1,c;
 x=++y;
 printf("x =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 x*=2;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 a=b+1;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 a++;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 c=2*a+b;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 a=c--;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 b=a++ + --c;
 printf("\nx =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
// system("pause");
 return 0;
}

// x       y       a       b       c 
//         2,5             1       
// 3,5     3,5     
//  7             
//                2    
//                3
//                7                 6    
//                8       12        5
