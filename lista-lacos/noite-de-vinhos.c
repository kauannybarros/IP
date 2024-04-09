//https://www.thehuxley.com/problem/4423?locale=pt_BR

#include <stdio.h>

int main() {
    int linhas, soma = 0, contador = 0, i = 0, media, somamedia;

    // numero de linhas
    scanf("%d", &linhas);

    for (i = 0; i < linhas; i++) {
        int nota;
        
        scanf("%d", &nota);

        while (nota != 0) {
            soma += nota;
            contador++;
            scanf("%d", &nota);
        }
        
        if (contador > 0) {
            media = soma/contador;
            somamedia += media;
    }
        contador=0;
        soma=0;
    }
        printf("Elas beberam %d ta�as!", somamedia);
 
    return 0;
}
