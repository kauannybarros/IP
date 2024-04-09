//https://www.thehuxley.com/problem/4305?locale=pt_BR

#include <stdio.h>
int main () {
    int pessoa;
    char lugar;
    float horaS, horaV, horasT;
    scanf("%f %f %c %d", &horaS, &horaV, &lugar, &pessoa);
    
    horasT = horaV - horaS;
    
    //se as entradas forem validas
    if ((horaS >= 0 && horaS <= 24) && (horaV >= 0 && horaV <= 24) && (horaS < horaV) && (lugar == 'A' || lugar == 'B') && (pessoa > 0)) {
        if (lugar == 'A') {
            //precisa ter mais de uma hora
            if (horasT <= 1) {
                printf("Infelizmente o uninho nao tanka, rodamos!\n");
            }
            //se tiver mais de 1.5h, ele leva mais 4 pessoas
            else if ((horasT >= 1.5 && pessoa <= 9) || (horasT < 1.5 && pessoa <= 5)) {
                printf("O uninho faz a boa, obrigado querida mae line\n");
            }
            //se tiver menos de 1.5h, ele so leva 5 pessoas
            else if (horasT < 1.5 && pessoa > 5) {
                printf("Infelizmente o uninho nao tanka, rodamos!\n");
            }
        }
          
        else if (lugar == 'B') {
            //precisa ter mais de 0.75h
            if (horasT <= 0.75) {
                printf("Infelizmente o uninho nao tanka, rodamos!\n");
            }
            //se tiver mais de 1.125h, ele leva mais 4 pessoas
            else if ((horasT >= 1.125 && pessoa <= 9) || (horasT < 1.125 && pessoa <= 5)) {
                printf("O uninho faz a boa, obrigado querida mae line\n");
            }
            //se tiver menos de 1.125h, ele so leva 5 pessoas
            else if (horasT < 1.125 && pessoa > 5) {
                printf("Infelizmente o uninho nao tanka, rodamos!\n");
            }
        }   
    }
    
    else { //se as entradas forem invalidas
        printf("Entrada Invalida");
    }
   
    return 0;
}
