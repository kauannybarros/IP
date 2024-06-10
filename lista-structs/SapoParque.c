//https://www.thehuxley.com/problem/4435?locale=pt_BR

#include <stdio.h>
#include <string.h>

typedef struct Brinquedo {
    int divertimento;
    int aborrecimento;
    char nome[30];
    int diversao3, diversao2, diversao1;
}Brinquedo;

int main () {

    Brinquedo brinquedo[3];

    //ler cada brinquedo
    for (int i=0; i < 3; i++) {
        scanf(" %29[^\n]", brinquedo[i].nome);
        scanf("%d %d", &brinquedo[i].divertimento, &brinquedo[i].aborrecimento);
    
    }

   //ver qual o maximo de diversao que da pra pegar com cada brinquedo

   for (int i = 0; i < 3; i++) {
    brinquedo[i].diversao1 = brinquedo[i].divertimento;
    brinquedo[i].diversao2 = brinquedo[i].divertimento - ((1*1)*brinquedo[i].aborrecimento);
    brinquedo[i].diversao3 = brinquedo[i].divertimento - ((2*2)*brinquedo[i].aborrecimento);
   }

    //agora, ir comparando cada um

    /*Possibilidades:
    1 1 1

    2 1 0
    2 0 1

    3 0 0

    0 2 1
    1 2 0

    0 3 0

    1 0 2
    0 1 2

    0 0 3*/

    int d111 = brinquedo[0].diversao1 + brinquedo[1].diversao1 + brinquedo[2].diversao1;
    int d210 = brinquedo[0].diversao1 + brinquedo[0].diversao2 + brinquedo[1].diversao1;
    int d201 = brinquedo[0].diversao1 + brinquedo[0].diversao2 + brinquedo[2].diversao1;
    int d300 = brinquedo[0].diversao1 + brinquedo[0].diversao2 + brinquedo[0].diversao3;
    int d021 = brinquedo[1].diversao1 + brinquedo[1].diversao2 + brinquedo[2].diversao1;
    int d120 = brinquedo[0].diversao1 + brinquedo[1].diversao2 + brinquedo[1].diversao1;
    int d030 = brinquedo[1].diversao1 + brinquedo[1].diversao2 + brinquedo[1].diversao3;
    int d102 = brinquedo[0].diversao1 + brinquedo[2].diversao2 + brinquedo[2].diversao1;
    int d012 = brinquedo[1].diversao1 + brinquedo[2].diversao2 + brinquedo[2].diversao1;
    int d003 = brinquedo[2].diversao1 + brinquedo[2].diversao2 + brinquedo[2].diversao3;

    //se for melhor ir um em cada vez
    if (d111 > d210 && d111 > d201 && d111 > d300 && d111 > d021 && d111 > d120 && d111 > d030 && d111 >= d102 && d111 >= d012 && d111 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 1 vez, %s 1 vez, %s 1 vez.", d111, brinquedo[0].nome, brinquedo[1].nome, brinquedo[2].nome);
    }
    
    //se for melhor ir 2x no primeiro e 1x no segundo
    else if (d210 >= d111 && d210 >= d201 && d210 > d300 && d210 >= d021 && d210 >= d120 && d210 > d030 && d210 >= d102 && d210 >= d012 && d210 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d210, brinquedo[0].nome, brinquedo[1].nome);
    }

    //se for melhor ir 2x no primeiro e 1x no terceiro
    else if (d201 >= d111 && d201 > d210 && d201 > d300 && d201 >= d021 && d201 >= d120 && d201 > d030 && d201 >= d102 && d201 >= d012 && d201 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d201, brinquedo[0].nome, brinquedo[2].nome);
    }

    //se for melhor ir 3x no primeiro
    else if (d300 >= d210 && d300 >= d201 && d300 >= d111 && d300 >= d021 && d300 >= d120 && d300 >= d030 && d300 >= d102 && d300 >= d012 && d300 >= d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 3 vezes.", d300, brinquedo[0].nome);
    }

    //se for melhor ir 2x no segundo e 1x no terceiro
    else if (d021 > d210 && d021 > d201 && d021 > d300 && d021 >= d111 && d021 > d120 && d021 > d030 && d021 >= d102 && d021 >= d012 && d021 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d021, brinquedo[1].nome, brinquedo[2].nome);
    }

    //se for melhor ir 2x no segundo e 1x no primeiro
    else if (d120 > d210 && d120 > d201 && d120 > d300 && d120 >= d021 && d120 >= d111 && d120 > d030 && d120 >= d102 && d120 >= d012 && d120 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d120, brinquedo[1].nome, brinquedo[0].nome);
    }

    //se for melhor ir 3x no segundo
    else if (d030 >= d210 && d030 >= d201 && d030 >= d111 && d030 >= d021 && d030 >= d120 && d030 > d300 && d030 >= d102 && d030 >= d012 && d030 >= d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 3 vezes.", d030, brinquedo[1].nome);
    }

    //se for melhor ir 2x no terceiro e 1x no primeiro
    else if (d102 >= d111 && d102 > d210 && d102 > d300 && d102 > d021 && d102 > d120 && d102 > d030 && d102 > d201 && d102 >= d012 && d102 > d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d102, brinquedo[2].nome, brinquedo[0].nome);
    }

    //se for melhor ir 2x no terceiro e 1x no segundo
    else if (d012 >= d111 && d012 > d210 && d012 > d300 && d012 > d021 && d012 > d120 && d012 > d030 && d012 > d201 && d012 > d102 && d012 >= d003) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 2 vezes, %s 1 vez.", d012, brinquedo[2].nome, brinquedo[1].nome);
    }

    //se for melhor ir 3x no terceiro
    else if (d003 >= d210 && d003 >= d201 && d003 >= d111 && d003 >= d021 && d003 >= d120 && d003 > d300 && d003 >= d102 && d003 >= d012 && d003 > d030) {
        printf("a maior diversao foi: %d\nindo nos brinquedos: %s 3 vezes.", d003, brinquedo[2].nome);
    }

    
}
