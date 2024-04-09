//https://www.thehuxley.com/problem/4413?locale=pt_BR

//Ha um jeito mais facil e rapido de fazer esse codigo mas foi um dos primeiros codigos em C que eu fiz, entao ficou bem baguncado

#include <stdio.h> 
int main () {
    char a, b, c, d, e, f;
    scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
    
   // r, b, g ,y , x sao as possibilidades de fio
   
    // se nao tiver nenhum x (6 fios conectados)
    if (a != 'x' && b != 'x' && c != 'x' && d != 'x' && e != 'x' && f != 'x') {
        if (a == 'g' && b != 'g' && c != 'g' && d != 'g' && e != 'g' && f != 'g') {
            printf("corta a");
        }
        else if (a != 'g' && b == 'g' && c != 'g' && d != 'g' && e != 'g' && f != 'g') {
            printf("corta b");
        }
        else if (a != 'g' && b != 'g' && c == 'g' && d != 'g' && e != 'g' && f != 'g') {
            printf("corta c");
        }
        else if (a != 'g' && b != 'g' && c != 'g' && d == 'g' && e != 'g' && f != 'g') {
            printf("corta d");
        }
        else if (a != 'g' && b != 'g' && c != 'g' && d != 'g' && e == 'g' && f != 'g') {
            printf("corta e");
        }
        else if (a != 'g' && b != 'g' && c != 'g' && d != 'g' && e != 'g' && f == 'g') {
            printf("corta f");
        }
        else { 
            printf("corta e");
        }
    }
    
    //se houve um x (5 fios conectados)
    // se a = x
    if (a == 'x' && b != 'x' && c != 'x' && d != 'x' && e != 'x' && f != 'x') {
        if (b == 'y' && c == 'y') {
            printf ("corta b");
        }
        else {
            printf("corta c");
        }
    }
  
    //se b = x
    if (a != 'x' && b == 'x' && c != 'x' && d != 'x' && e != 'x' && f != 'x') {
        if (a == 'y' && c == 'y') {
            printf ("corta a");
        }
        else {
            printf("corta c");
        }
    }
  
    // se c = x
    if (a != 'x' && b != 'x' && c == 'x' && d != 'x' && e != 'x' && f != 'x') {
        if (a == 'y' && b == 'y') {
            printf ("corta a");
        }
        else {
            printf("corta b");
        }
    }
  
    // se d = x
    if (a != 'x' && b != 'x' && c != 'x' && d == 'x' && e != 'x' && f != 'x') {
        if (a == 'y' && b == 'y') {
            printf ("corta a");
        }
        else {
            printf("corta b");
        }
    }
  
    // se e = x
     if (a != 'x' && b != 'x' && c != 'x' && d != 'x' && e == 'x' && f != 'x') {
        if (a == 'y' && b == 'y') {
            printf ("corta a");
        }
        else {
            printf("corta b");
        }
    }
  
    // se f = x
     if (a != 'x' && b != 'x' && c != 'x' && d != 'x' && e != 'x' && f == 'x') {
        if (a == 'y' && b == 'y') {
            printf ("corta a");
        }
        else {
            printf("corta b");
        }
    }
    
    // 4 fios conectados (2 sao = x)
    //se a e b forem = x
    if (a == 'x' && b == 'x' && c != 'x' && d != 'x' && e != 'x' && f != 'x' ) {
        if (c != 'r' && d != 'r' && e != 'r' && f != 'r') {
            printf("corta d");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta c");
        }
    }
  
    //se a e c = x
     if (a == 'x' && b != 'x' && c == 'x' && d != 'x' && e != 'x' && f != 'x' ) {
        if (b != 'r' && d != 'r' && e != 'r' && f != 'r') {
            printf("corta d");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta b");
        }
    }
  
    // se a e d = x
    if (a == 'x' && b != 'x' && c != 'x' && d == 'x' && e != 'x' && f != 'x' ) {
        if (b != 'r' && c != 'r' && e != 'r' && f != 'r') {
            printf("corta c");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta b");
        }
    }
  
    //se a e e = x
      if (a == 'x' && b != 'x' && c != 'x' && d != 'x' && e == 'x' && f != 'x' ) {
        if (b != 'r' && c != 'r' && d != 'r' && f != 'r') {
            printf("corta c");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta b");
        }
    }
  
    //se a e f = x
      if (a == 'x' && b != 'x' && c != 'x' && d != 'x' && e != 'x' && f == 'x' ) {
        if (b != 'r' && c != 'r' && e != 'r' && d != 'r') {
            printf("corta c");
        }
        else if (e == 'b') {
            printf("corta e");
        }
        else {
            printf("corta b");
        }
    }
    
    //se b e c = x
      if (a != 'x' && b == 'x' && c == 'x' && d != 'x' && e != 'x' && f != 'x' ) {
        if (a != 'r' && d != 'r' && e != 'r' && f != 'r') {
            printf("corta d");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se b e d = x 
      if (a != 'x' && b == 'x' && c != 'x' && d == 'x' && e != 'x' && f != 'x' ) {
        if (a != 'r' && c != 'r' && e != 'r' && f != 'r') {
            printf("corta c");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se b e e = x 
      if (a != 'x' && b == 'x' && c != 'x' && d != 'x' && e == 'x' && f != 'x' ) {
        if (a != 'r' && c != 'r' && d != 'r' && f != 'r') {
            printf("corta c");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se b e f = x 
      if (a != 'x' && b == 'x' && c != 'x' && d != 'x' && e != 'x' && f == 'x' ) {
        if (a != 'r' && c != 'r' && d != 'r' && e != 'r') {
            printf("corta c");
        }
        else if (e == 'b') {
            printf("corta e");
        }
        else {
            printf("corta a");
        }
    }
  
    //se c e d = x
      if (a != 'x' && b != 'x' && c == 'x' && d == 'x' && e != 'x' && f != 'x' ) {
        if (a != 'r' && b != 'r' && e != 'r' && f != 'r') {
            printf("corta b");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se c e e = x
       if (a != 'x' && b != 'x' && c == 'x' && d != 'x' && e == 'x' && f != 'x' ) {
        if (a != 'r' && b != 'r' && d != 'r' && f != 'r') {
            printf("corta b");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se c e f = x
       if (a != 'x' && b != 'x' && c == 'x' && d != 'x' && e != 'x' && f == 'x' ) {
        if (a != 'r' && b != 'r' && e != 'r' && d != 'r') {
            printf("corta b");
        }
        else if (e == 'b') {
            printf("corta e");
        }
        else {
            printf("corta a");
        }
    }
  
    //se d e e = x
       if (a != 'x' && b != 'x' && c != 'x' && d == 'x' && e == 'x' && f != 'x' ) {
        if (a != 'r' && b != 'r' && c != 'r' && f != 'r') {
            printf("corta b");
        }
        else if (f == 'b') {
            printf("corta f");
        }
        else {
            printf("corta a");
        }
    }
  
    //se d e f= x
       if (a != 'x' && b != 'x' && c != 'x' && d == 'x' && e != 'x' && f == 'x' ) {
        if (a != 'r' && b != 'r' && c != 'r' && e != 'r') {
            printf("corta b");
        }
        else if (e == 'b') {
            printf("corta e");
        }
        else {
            printf("corta a");
        }
    }
  
    //se e e f=x
       if (a != 'x' && b != 'x' && c != 'x' && d != 'x' && e == 'x' && f == 'x' ) {
        if (a != 'r' && b != 'r' && c != 'r' && d != 'r') {
            printf("corta b");
        }
        else if (d == 'b') {
            printf("corta d");
        }
        else {
            printf("corta a");
        }
    }
   return 0;
}
