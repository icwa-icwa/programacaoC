#include <stdio.h>
int main(){
char ch1, ch2;
printf("Introduza um Caractere: \n");
scanf("%c", &ch1);
printf("Introduza outro Caractere: \n");
scanf(" %c", &ch2);
printf("Os caracteres introduzidos foram '%c' e '%c' \n", ch1, ch2);
/*introduzir um espaço antes do segundo scanf(" %c") para ignorar espaço em branco
de forma que ao printar o enter armazenado no buffer do teclado não seja lido como
um caractere */




}