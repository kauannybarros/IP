//https://www.thehuxley.com/problem/3913?locale=pt_BR

#include <stdio.h> 
int main () {
    int a, b, c, d, w, x, y, z, rw, rx, ry, rz, ti, ta;
    scanf("%d %d %d %d", &a, &b, &c, &d); //forcas aliadas
    scanf("%d %d %d %d", &w, &x, &y, &z); //forcas inimigas
    scanf("%d %d %d %d", &rw, &rx, &ry, &rz); //reforcos das forcas inimigas
    
    ta = a + b + c + d;
    ti = w + x + y + z + rw + rx + ry + rz;
  
    //se os aliados possuem mais da metade da forca apos reforcos, avancar
    if (ta > (ti * 1.5)) {
        printf("Avancar");
    }
    
    //se os aliados possuem menos da metade
    else if (ta < ti) {
        printf("Recuar");
    }
    
    else {
        printf("Permanecer");
    }
  
    return 0;
}
