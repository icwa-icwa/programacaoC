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
   }
   // pode ser feito com o switch
float nota1, nota2, media;
int opcao;  
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1.Calcular a média\n");
    printf("2.Determinar Status\n");
    printf("3.Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
   
switch(opcao)
{
    case 1:
    printf("Calcular a média\n");
    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    // testar a condição se a nota é >= 0 e <= 10
    if((nota1>=0 && nota1 <=10) && (nota2>=0 && nota2 <=10) )
    {
        media = (nota1 + nota2)/2;
        printf("A média é: %.2f\n", media);
    }else {
        printf("Entradas com Notas Incorretas\n");
    }
    break;
    case 2:
    printf("Determinar status\n");
    printf("Entrar com a média: \n");
    scanf("%f", &media);
    if(media >= 7 && media <= 10){
        printf("Status: Aprovado\n");
    } else if(media >=5){
        printf("Status: Recuperação\n");
    } else{
        printf("Status: Reprovado\n");
    }
    break;
    case 3:
    printf("Saindo do programa...\n");
    break;
    default     
    int idade = 16;
    int resultado;

    idade > 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade.\n");
  */
int temperatura = 32;
int resultado;
resultado = temperatura > 30 ? 1 : 0;
if(temperatura == 1){
    printf("Está calor!\n");
}else{
    printf("Está frio!\n");
}


    printf("\n");

    return 0;

}