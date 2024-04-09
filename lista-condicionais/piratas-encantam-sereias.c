//https://www.thehuxley.com/problem/4028?locale=pt_BR

#include <stdio.h>
int main () {
    int numero, doh, re, mi, fa, sol, la, si, tonica, terca, quinta;
    scanf("%d", &numero);
    
    //valor de cada nota
    doh = 0;
    re = 1;
    mi = 2;
    fa = 3;
    sol = 4;
    la = 5;
    si = 6;
    
    //valor de cada tetrade
    tonica = (numero / 100) % 7;
    terca = (numero /10) % 7;
    quinta = numero % 7;
    
    if (tonica == doh && terca == mi && quinta == sol) {
        printf("Acorde do satisfaz.");
    }
    else if (tonica == re && terca == fa && quinta == la) {
        printf("Acorde re satisfaz.");
    }
    else if (tonica == mi && terca == sol && quinta == si) {
        printf("Acorde mi satisfaz.");
    }
    else if (tonica == fa && terca == la && quinta == doh) {
        printf("Acorde fa satisfaz.");
    }
    else if (tonica == sol && terca == si && quinta == re) {
        printf("Acorde sol satisfaz.");
    }
    else if (tonica == la && terca == doh && quinta == mi) {
        printf("Acorde la satisfaz.");
    }
    else if (tonica == si && terca == re && quinta == fa) {
        printf("Acorde si satisfaz.");
    }
    else {
        printf("Combinacao nao satisfaz.");
    }

}
