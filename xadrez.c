#include <stdio.h>
int main(){
    // nível novato 
    printf("***Simulação do Movimento do Bispo***\n");
for (int b = 0; b <= 5; b++) { // simulação do movimento do bispo
    printf("direita\n cima\n");//na diagonal 1 casa p/direita e 1 p/cima por 5 casas
}
// simulação do movimento da torre 5 casas para a direita
printf("***Simulação do Movimento da Torre***\n");
int t = 0;
while (t < 5){
    printf("direita\n");
    t++;
}
// simulação do movimento da rainha 8 casas para a esquerda
printf("***Simulação do Movimento da Rainha***\n");
int r = 0;
do {
    printf("esquerda\n");
    r++;
} while(r<8);

return 0;
}