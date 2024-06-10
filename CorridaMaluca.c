//https://www.thehuxley.com/problem/4068?locale=pt_BR

#include <stdio.h>
#include <string.h>
#define TAM 1000

typedef struct {
    char nome[10];
    int valor;
    int performance;

} Peca;

//motor, rodas e lataria
//maior performance enquanto gasta o minimo

int main () {
    int dinheiro, num_pecas;

    //ler o dinheiro e as pecas
    scanf("%d %d", &dinheiro, &num_pecas);
    
    Peca peca[num_pecas];
    int flagmotor=0, flaglataria=0, flagroda=0;
    Peca motor[TAM];
    Peca lataria[TAM];
    Peca roda[TAM];


    //ler cada peca
    for (int i = 0; i < num_pecas; i++) {
        scanf(" %s %d %d", peca[i].nome, &peca[i].valor, &peca[i].performance);
        
        if (strcmp(peca[i].nome, "Motor") == 0) {
            motor[flagmotor] = peca[i];
            flagmotor++;
        }

        else if (strcmp(peca[i].nome, "Roda") == 0) {
            roda[flagroda] = peca[i];
            flagroda++;
        }

        else if (strcmp(peca[i].nome, "Lataria") == 0) {
            lataria[flaglataria] = peca[i];
            flaglataria++;
        }
    }

    //agora, ir comparando

    if (flagmotor == 0 || flaglataria == 0 || flagroda == 0) {
        printf("Nao foi possivel construir uma caranga...");
    }
    


    else {
        
        Peca aux[3];
        aux[0] = motor[0];
        aux[1] = roda[0];
        aux[2] = lataria[0];

        for (int i = 0; i < flagmotor; i++) {
            for (int j=0; j < flagroda; j++) {
                for (int k=0; k < flaglataria; k++) {

                

                    if (((motor[i].performance + roda[j].performance + lataria[k].performance) > (aux[1].performance + aux[2].performance + aux[0].performance))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) <= (aux[0].valor + aux[1].valor + aux[2].valor))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) <= dinheiro)) {
                        aux[0] = motor[i];
                        aux[1] = roda[j];
                        aux[2] = lataria[k];
                    }

                    else if (((motor[i].performance + roda[j].performance + lataria[k].performance) > (aux[1].performance + aux[2].performance + aux[0].performance))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) > (aux[0].valor + aux[1].valor + aux[2].valor))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) <= dinheiro)) {
                        aux[0] = motor[i];
                        aux[1] = roda[j];
                        aux[2] = lataria[k];
                    }
                    
                    else if (((motor[i].performance + roda[j].performance + lataria[k].performance) == (aux[1].performance + aux[2].performance + aux[0].performance))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) < (aux[0].valor + aux[1].valor + aux[2].valor))
                    && ((motor[i].valor + roda[j].valor + lataria[k].valor) <= dinheiro)) {
                        aux[0] = motor[i];
                        aux[1] = roda[j];
                        aux[2] = lataria[k];
                    }
                }
            }
        }

        if ((aux[0].valor + aux[1].valor + aux[2].valor) > dinheiro) {
            printf("Nao foi possivel construir uma caranga...");
        }

        else {
            printf("Minha nave tem uma performance de %d pontos\n", aux[0].performance + aux[1].performance + aux[2].performance);

            if ((aux[0].valor + aux[1].valor + aux[2].valor) < dinheiro) {
             printf("E ainda me sobraram %d mangos!", dinheiro - (aux[0].valor + aux[1].valor + aux[2].valor)); 
                
            }
        }
    }
    
    return 0;
}