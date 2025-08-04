#include <stdio.h>
int main(){
   /*int a = 10, b = 5;
    if (a > 0 || b > 0) 
    { printf("Pelo menos um dos números é positivo]n");
    } else {
        printf("Os dois números são negativos.\n");
    }
// precedencia de operadores
// estrutura de decisao encadeadas
int a = - 5, b = - 6;
if(a > 0 )
{ 
    printf("a e positivo.\n");
    }
    
if(b > 0 ){
    printf("b e positivo.\n");
} else {
    printf("pelo menos um numero e negativo.\n");
}
// estrutura de decisao aninhada
int idade, renda;
printf("Digite sua idade:");
scanf("%d", &idade);
printf("Digite a sua renda mensal:");
scanf("%d", &renda);

if (idade <= 18 || idade >= 60){
    if(renda < 2000){
    printf("Você tem direito ao desconto.\n");
} else {
    printf("Você não atende aos critérios pela renda.\n");
} 
} else {
    printf("Você não atende aos critérios pela idade.\n");
}
int idade, renda, dependentes;
printf("Digite sua idade:\n");
scanf("%d", &idade);
printf("Digite sua renda:\n");
scanf("%d", &renda);
printf("Digite o número de dependentes:\n");
scanf("%d", &dependentes);

if(idade >= 18 && idade <= 65){
    if(renda < 3000){
        if(dependentes > 2){
            printf("Você atende todos os critérios.\n");
        }
    } else{
        printf("Você não atende ao critério renda.\n");
}
}else{
    printf("Você não atende ao critério idade.\n");
}
int numero;
printf("Digite um número:\n");
scanf("%d", &numero);

if (numero > 0){
    if(numero % 2 == 0){
        printf("o número é par\n");
    } else {
        printf("o número é ímpar\n");
    }
} else if(numero == 0){
    printf("o número é zero\n");
} else {
    printf("negativo\n");
}
// switch é um menu
int opcao;
float saldo = 1000;
    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("O seu saldo é: R$%.2f\n", saldo);
        break;
        case 2:
            printf("Digite o banco de depósito:\n");
            printf("Digite a agencia de depósito:\n");
        break;
        case 3:
            printf("Digite o valor a sacar:\n");
        break;
        default:
            printf("opção inválida\n");
    }
   int dia;
   printf("Entre o valor do dia!\n");
   scanf("%d", &dia);
   if (dia == 1){
    printf("Domingo\n");
   }else if(dia == 2){
    printf("Segunda-feira\n");
   }else if(dia == 3){
    printf("Terça-feira\n");
   }else if (dia == 4){
    printf("Quarta-feira\n");
   }else if (dia == 5){
    printf("Quinta-Feira\n");
   }else if(dia == 6){
    printf("Sexta-feria\n");
   }else if(dia == 7){
    printf("Sábado\n");
   }*/
   // pode ser feito com o switch


    return 0;

}