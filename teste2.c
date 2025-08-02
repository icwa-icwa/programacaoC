#include <stdio.h>
int main(){
    /*
    Atribuição simples(=)
    Atribuição com Soma(+=)
    Atribuição com Subtração(-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão(/=)
    */
   /*
   int numero1 = 10, numero2, resultado;
   resultado = 10;
   printf("Resultado: %d\n", resultado);
   resultado +=20; // resultado = resultado + 20;
   printf("Resultado: %d\n", resultado);
   resultado -= numero1; // resultado = resultado - numero1;
   printf("Resultado: %d\n", resultado);
    resultado *= 5; // resultado = resultado * 5;
   printf("Resultado: %d\n", resultado);
   resultado /= 2; // resultado = resultado / 2;
   printf("Resultado: %d\n", resultado);
   */
  /*
  Incremento(++)
  Pré-Incremento ++a
  Pós-Incremento a++
  Decremento(--)
  Pré-Decremento --a
  Pós-Decremento a--
  */
 int numero1 = 1, resultado;
 printf("Antes incremento: %d\n", numero1); // 3 formas de usar incremento ou decremento
 // numero1 = numero1 +1;
 // numero1 += 1;
 resultado = numero1++;
 numero1++;
 //printf("Pós incremento: %d\n", numero1);
 
 numero1--;
 printf("Pós decremento: %d\n", numero1);
 // numero1 = numero1 -1;
 // numero1 -= 1;
 ++numero1;
printf("Pré incremento: %d\n", numero1);
--numero1;
printf("Pré decremento: %d\n", numero1);
}