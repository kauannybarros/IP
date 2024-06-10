//https://www.thehuxley.com/problem/4434?locale=pt_BR

#include <stdio.h>
#include <string.h>
#define tam 50 //colocar um tamanho definido pras strings de nome

typedef struct Estoque {
    char nome [tam];
    int quantidade;
    float valor;
} Estoque;

int main () {

    int tamanho;

    //ler tamanho do estoque
    scanf("%d", &tamanho);

    Estoque estoque[tamanho][tamanho];

    //colocar tudo como vazio antes de comecar
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            strcpy(estoque[i][j].nome, "");
            estoque[i][j].quantidade = 0;
            estoque[i][j].valor = 0.0;
    }
}


    char operacao[10];

    /*OPERAÇÕES:
    CREATE linha coluna nome quantidade preco
    READ nome
    UPDATE nome quantidade, preco
    DELETE: nome
    PRINT
    EXIT*/

    while (strcmp(operacao, "EXIT") != 0) { //enquanto nao for EXIT
        scanf(" %s", operacao);

        if (strcmp(operacao, "CREATE") == 0) { //se selecionar CREATE
           int linha, coluna;
           //ler a linha e coluna que quer criar
            scanf("%d %d", &linha, &coluna);
            
            //confirmar que ja nao tem produto na linha e coluna
            if (strcmp(estoque[linha][coluna].nome, "") == 0) {
                //ler o nome, quantidade e valor
                scanf(" %s", estoque[linha][coluna].nome);
                scanf("%d", &estoque[linha][coluna].quantidade);
                scanf("%f", &estoque[linha][coluna].valor);

                //printar que foi adicionado com sucesso
                printf("Produto adicionado no estoque!\n");                
            }

            else {
                printf("ERRO: espaco ja ocupado\n");
            }
        }

        else if (strcmp(operacao, "READ") == 0) {
            char leitura[tam];
            scanf(" %s", leitura);

            //ir procurando qual que ele quer
            for (int i=0; i < tamanho; i++) {
                for (int j=0; j < tamanho; j++) {
                    if (strcmp(estoque[i][j].nome, leitura) == 0) {
                        printf("LINHA: %d COLUNA: %d NOME: %s QTD: %d PRECO: %.2f\n", i, j, estoque[i][j].nome, estoque[i][j].quantidade, estoque[i][j].valor);
                    }
                }
            }
        }

        else if (strcmp(operacao, "UPDATE") == 0) {
            char mudanca[tam];
            scanf(" %s", mudanca);
            int achado = 0;

            //mesmo esquema do read, ir procurando qual ele quer
            for (int i = 0; i < tamanho; i++) {
                for (int j = 0; j < tamanho; j++) {
                    if (strcmp(estoque[i][j].nome, mudanca)==0) {
                        scanf(" %d %f", &estoque[i][j].quantidade, &estoque[i][j].valor);
                        printf("Produto atualizado!\n");
                        achado = 1; //dizer que a flag foi verdade
                    }
                }
            }

            //se nao achar o produto
            if (achado != 1) {
                printf("Produto nao encontrado!\n");
            }
        } 

        else if (strcmp(operacao, "DELETE") == 0) {
            char deletar[tam];
            scanf(" %s", deletar);

            int achou = 0;

            //procurar qual produto
            for (int i=0; i < tamanho; i++) {
                for (int j=0 ; j < tamanho; j++) {
                    if (strcmp(estoque[i][j].nome, deletar) == 0) {
                        //deletar tudo
                        strcpy(estoque[i][j].nome, "");
                        estoque[i][j].quantidade = 0;
                        estoque[i][j].valor = 0.0;
                        printf("Produto removido!\n");
                        achou = 1;
                    }
                }
            }

            if (achou != 1){
                printf("Produto nao encontrado!\n");
            }
        }

        else if (strcmp(operacao, "PRINT") == 0) {
            //so ir printando
            for (int i = 0; i < tamanho; i++) {
                for (int j=0; j < tamanho; j++) {
                    //confirmar que tem algo no estoque
                    if (strcmp(estoque[i][j].nome, "") != 0) {
                        printf("LINHA: %d COLUNA: %d NOME: %s QTD: %d PRECO: %.2f\n", i, j, estoque[i][j].nome, estoque[i][j].quantidade, estoque[i][j].valor);
                    }
                }
            }
        }
    }

    printf("Saindo...");

    return 0;
}
